#include <stdio.h>

char *leet(char *str) {
    char *leet_equivs[] = {"4", "3", "0", "7", "1"};
    char *letters[] = {"aA", "eE", "oO", "tT", "lL"};
    int len = strlen(str);
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < len; j++) {
            if (strchr(letters[i], str[j])) {  // if str[j] is in letters[i]
                str[j] = leet_equivs[i][0];
            }
        }
    }
    return str;
}

