#include <ctype.h>
#include <stdio.h>
#include"main.h"
/**
 * cap_string - Entry point
 * @str: String
 * Return: The string
 */
char *cap_string(char *str) {
    int i = 0;
    while (str[i] != '\0') {  /**loop through each character in the string*/
        if (str[i] >= 'a' && str[i] <= 'z') {  /** if the character is a lowercase letter*/
            str[i] -= ('a' - 'A');  /** subtract the difference between uppercase and lowercase letters to convert to uppercase*/
        }
        i++;/** increment the index to move to the next character*/
    }
    return str;
}
