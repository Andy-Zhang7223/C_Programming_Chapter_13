#include <stdio.h>
#include <string.h>

int string_reverser() {
    char str[100];
    printf("Enter a string: ");
    gets(str);
    int len = strlen(str);
    printf("Reversed: ");
    for (int i = len-1; i >= 0; i--) {
        printf("%c", str[i]);
    }
}

int main() {
    string_reverser();
    return 0;
}