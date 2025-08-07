#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void strings_xor(char* s, char* t, char* res) {
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        if (s[i] == t[i])
            res[i] = '0';
        else
            res[i] = '1';
    }
    res[len] = '\0'; 
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char s[100], t[100], res[100]; 
    scanf("%s", s);
    scanf("%s", t);

    strings_xor(s, t, res); 

    printf("%s\n", res);

    return 0;
   
}
