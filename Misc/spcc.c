#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

char* substr(const char *src, int m, int n) {
    int len = n - m;
    char *dest = (char*)malloc(sizeof(char) * (len + 1));
    for (int i = m; i < n && (*(src + i) != '\0'); i++){
        *dest = *(src + i);
        dest++;
    }
    *dest = '\0';
    return dest - len;
}

bool check(char **arr, int sz , char word[]) {
    for(int i = 0; i < sz; i++) {
        if(strcmp(arr[i], word) == 0)
            return true;
    }
    return false;
}

void main() {
    FILE *fptr;
    fptr = fopen("input.txt", "r");
    char s[100];
    fscanf(fptr, "%[^\n]", &s);
    printf("Entered word: %s\n\n", s);
    char *dataTypes[4] = {"int", "float", "double", "long"};
    char *relationalOps[5] = {">", "<", "==", ">=", "<="};
    char *arthmeticOps[4] = {"+", "-", "/", "*"};
    char *logicalOps[3] = {"|", "&", "^"};
    int dtypes = 0, rtypes = 0, atypes = 0, ltypes = 0, itypes = 0, invalids = 0;
    for(int i = 0; i < strlen(s); i++) {
        if(s[i] == ' ')
            continue;
        else {
            int x = i+1;
            while(x < strlen(s) && s[x] != ' ')
                x++;
            char* word = substr(s, i, x);
            if(check(dataTypes, 4, word)) {
                printf("%s is a data type\n", word);
                dtypes++;
            }
            else if(check(relationalOps, 5, word)) {
                printf("%s is a relational operator\n", word);
                rtypes++;
            }
            else if(check(arthmeticOps, 4, word)) {
                printf("%s is a arithmetic operator\n", word);
                atypes++;
            }
            else if(check(logicalOps, 3, word)) {
                printf("%s is a logical operator\n", word);
                ltypes++;
            }
            else {
                if(isalpha(word[0]) == 0 && word[0] != '_') {
                    printf("%s is an invalid identifier\n", word);
                    invalids++;
                }
                else {
                    printf("%s is an identifier\n", word);
                    itypes++;
                }
            }
            i = x;
        }
    }
    printf("\nLogical Operators: %d\nRelational Operators: %d\nArithmetic Operators: %d\nData Types: %d\nIdentifiers: %d\nInvalids: %d", ltypes, rtypes, atypes, dtypes, itypes, invalids);
}