#include <stdio.h>
#include <stdlib.h>

int main() {
    int* array = malloc(sizeof(int) * 3);

    array[0] = 10;
    array[1] = 10;
    array[2] = 20;

    array = realloc(array ,sizeof(int) * 2);

    printf("%i\n", array[1]);  //10
    printf("%i", array[2]);  //outside the bond

    free(array);
    return 0;
}