#include <ctype.h>
#include <stdio.h>
#include <string.h>

int i = 0;

void removeSpaces(const char *input, char *output) {
    int i = 0, j = 0;
    while (input[i] != '\0') {
        if (input[i] != ' ' && input[i] != ',' && input[i] != '.' && input[i] != '-'
            && input[i] != '_' && input[i] != '?' && input[i] != '!') {
            output[j++] = input[i];
            }
        i++;
    }
    output[j] = '\0';
}

int palindromechecker() {
    bool isPalindrome = true;
    int top = 0;
    char phrase[100] = "";
    printf("Enter a phrase: ");
    fgets(phrase, sizeof(phrase), stdin);
    removeSpaces(phrase, phrase);
    top = strlen(phrase) - 2;
    char phrase2[100] = "";
    int top2 = top;
    for (int x = 0; x <= top; x++) {
        phrase2[x] = toupper(phrase[top2]);
        top2--;
    }
    for (int *p = &i; i <= top; (*p)++) {
        phrase[i] = toupper(phrase[i]);
        if (phrase[i] != phrase2[i]) {
            printf("Not a Palindrome\n");
            isPalindrome = false;
            break;
        }
    }
    if (isPalindrome) {
        printf("Palindrome\n");
    }
}

int main(void) {
    palindromechecker();
    return 0;
}