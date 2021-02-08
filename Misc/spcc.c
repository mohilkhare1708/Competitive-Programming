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
    char s[] = "int float mohil >= | 67";
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
            if(check(dataTypes, 4, word))
                dtypes++;
            else if(check(relationalOps, 5, word))
                rtypes++;
            else if(check(arthmeticOps, 4, word))
                atypes++;
            else if(check(logicalOps, 3, word))
                ltypes++;
            else {
                if(isalpha(word[0]) != 0 && word[0] != '_') 
                    invalids++;
                else
                    itypes++;
            }
            i = x;
        }
    }
    printf("Logical Operators: %d\nRelational Operators: %d\nArithmetic Operators: %d\nData Types: %d\nIdentifiers: %d\nInvalids: %d", ltypes, rtypes, atypes, dtypes, itypes, invalids);
}