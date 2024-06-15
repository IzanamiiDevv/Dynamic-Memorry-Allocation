#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* string(const char* str) {
    char* temp = malloc(sizeof(char) * (strlen(str) + 1));
    strcpy(temp, str);
    return temp;
}

void str_push(char** str, char c) {
    size_t len = strlen(*str);
    *str = (char*)realloc(*str,(sizeof(char) * (len + 2)));
    (*str)[len] = c;
    (*str)[len + 1] = '\0';
}

int main() {
    
    char* text = string("Hello World");
    
    str_push(&text, 'C');
    
    //This Will not be Printed out because it is out of Bound
    for(int i = 13; i < 20; i++) {
        text[i] = 'F';
    }

    printf("%s",text);
    
    free(text);
    return 0;
}