#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isValid(char* s) {
    int length = strlen(s);
    char stack[length];
    int top = -1;

    for (int i = 0; i < length; i++) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            stack[++top] = s[i];
        } else {
            if (top == -1) {
                return false; // Closing bracket without a matching opening bracket
            }
            char opening = stack[top--];
            if ((s[i] == ')' && opening != '(') ||
                (s[i] == ']' && opening != '[') ||
                (s[i] == '}' && opening != '{')) {
                return false; // Mismatched opening and closing brackets
            }
        }
    }

    return top == -1; // True if all opening brackets have been matched
}