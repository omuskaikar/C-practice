#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_SIZE 100

char stack[MAX_SIZE];
int top = -1;

void push(char item) {
    if (top >= MAX_SIZE - 1) {
        printf("Stack Overflow");
        exit(1);
    } else {
        stack[++top] = item;
    }
}

char pop() {
    if (top < 0) {
        printf("Stack Underflow");
        exit(1);
    } else {
        return stack[top--];
    }
}

int isOperator(char symbol) {
    if (symbol == '+' || symbol == '-' || symbol == '*' || symbol == '/') {
        return 1;
    } else {
        return 0;
    }
}

void convertToPostfix(char prefix[], char postfix[]) {
    int i, j;

    for (i = strlen(prefix) - 1, j = 0; i >= 0; i--, j++) {
        if (isOperator(prefix[i])) {
            char op1 = pop();
            char op2 = pop();
            postfix[j] = op1;
            postfix[++j] = op2;
            postfix[++j] = prefix[i];
        } else {
            postfix[j] = prefix[i];
        }
    }

    postfix[j] = '\0';
}

int main() {
    char prefix[MAX_SIZE], postfix[MAX_SIZE];

    printf("Enter a prefix expression: ");
    scanf("%s", prefix);

    convertToPostfix(prefix, postfix);

    printf("Postfix expression: %s", postfix);

    return 0;
}
