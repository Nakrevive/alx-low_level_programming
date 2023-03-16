#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - checks if a string contains only digits
 * @s: the string to check
 *
 * Return: 1 if the string contains only digits, 0 otherwise
 */
int is_digit(char *s)
{
    while (*s)
    {
        if (*s < '0' || *s > '9')
            return 0;
        s++;
    }
    return 1;
}

/**
 * multiply - multiplies two positive numbers
 * @num1: the first number to multiply
 * @num2: the second number to multiply
 *
 * Return: the result of multiplying num1 and num2
 */
char *multiply(char *num1, char *num2)
{
    int len1 = 0, len2 = 0, i, j, k = 0, carry = 0;
    char *result;

    while (num1[len1])
        len1++;
    while (num2[len2])
        len2++;

    result = calloc(len1 + len2 + 1, sizeof(char));
    if (!result)
    {
        printf("Error\n");
        exit(98);
    }

    for (i = len1 - 1; i >= 0; i--)
    {
        carry = 0;
        for (j = len2 - 1; j >= 0; j--)
        {
            k = i + j + 1;
            carry += (num1[i] - '0') * (num2[j] - '0') + result[k];
            result[k] = carry % 10;
            carry /= 10;
        }
        result[i] += carry;
    }

    while (*result == 0 && *(result + 1))
        result++;

    return result;
}

/**
 * main - multiplies two positive numbers
 * @argc: the number of command-line arguments
 * @argv: the command-line arguments
 *
 * Return: 0 if successful, 98 if the number of arguments is incorrect or if
 *         either num1 or num2 contains non-digit characters
 */
int main(int argc, char **argv)
{
    char *num1, *num2, *result;

    if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
    {
        printf("Error\n");
        return 98;
    }

    num1 = argv[1];
    num2 = argv[2];

    result = multiply(num1, num2);
    printf("%s\n", result);

    free(result);
    return 0;
}

