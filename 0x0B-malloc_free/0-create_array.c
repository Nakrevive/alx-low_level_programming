#include <stdlib.h>

char *create_array(unsigned int size, char c) {
    if (size == 0) {
        return NULL; // If size = 0, return NULL
    }

    char *array = malloc(size * sizeof(char)); // Allocate memory for array
    if (array == NULL) {
        return NULL; // If malloc fails, return NULL
    }

    // Initialize each element of array with the given character c
    for (unsigned int i = 0; i < size; i++) {
        array[i] = c;
    }

    return array; // Return pointer to the array
}

