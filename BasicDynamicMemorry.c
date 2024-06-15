#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* copy(const char* text);

int main() {

    //Copying a String
    const char* orignial = "Hello World";
    size_t length = strlen(orignial);
    char* copied = malloc(sizeof(char) * (length + 1));

    for(int i = 0; i < length; i++) {
        copied[i] = orignial[i];
    }

    copied[length] = '\0';

    printf("original: %s\n", orignial);
    printf("copied: %s\n", copied);
    free(copied);


    //Chaging Some Value of the String
    char* ncopied = copy("Hello");
    ncopied[0] = 'Y';
    printf("ncopied: %s\n", ncopied);
    free(ncopied);

    return 0;
}


//String Copy Function
char* copy(const char* text) {
    char* temp = malloc(sizeof(char) * (strlen(text) + 1));
    if(temp == NULL) return NULL;
    strcpy(temp, text);
    temp[strlen(text)] = '\0';
    return temp;
}