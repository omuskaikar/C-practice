#include <stdio.h>
#include <string.h>

#define MAX_STACK_SIZE 50

char stack[MAX_STACK_SIZE];
int top = -1;

void push(char a) {
    if (top < MAX_STACK_SIZE - 1) {
        top++;
        stack[top] = a;
    } else {
        printf("Stack overflow!\n");
    }
}

void pop() {
    if (top >= 0) {
        top--;
    } else {
        printf("Stack underflow!\n");
    }
}

int main() {
    char exp[MAX_STACK_SIZE];
    int i, j, balanced = 1;
    printf("Enter the expression: ");
    fgets(exp, MAX_STACK_SIZE, stdin);
    for (i = 0; i < strlen(exp); i++) {
        if (exp[i] == '(' || exp[i] == '[' || exp[i] == '{') {
            push(exp[i]);
        } else if (exp[i] == ')' || exp[i] == ']' || exp[i] == '}') {
            if (top < 0) {
                balanced = 0;
                break;
            }
            if (exp[i] == ')' && stack[top] == '(') {
                pop();
            } else if (exp[i] == ']' && stack[top] == '[') {
                pop();
            } else if (exp[i] == '}' && stack[top] == '{') {
                pop();
            } else {
                balanced = 0;
                break;
            }
        }
    }
    if (top >= 0 || balanced == 0) {
        printf("Expression is not balanced.\n");
    } else {
        printf("Expression is balanced.\n");
    }
    return 0;
}
