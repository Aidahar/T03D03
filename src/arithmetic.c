#include <stdio.h>

int sum(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);

int main() {
    int a, b;
    char c;
    scanf("%d%d%c", &a, &b, &c);
    if (c != '\n') {
        printf("Incorrect input\n");
        return 1;
    }
    if (b == 0) {
        printf("%d %d %d %s\n", sum(a, b), sub(a, b), mul(a, b), "n/a");
    } else {
        printf("%d %d %d %d\n", sum(a, b), sub(a, b), mul(a, b), div(a, b));
    }
    return 0;
}

int sum(int a, int b) { return (a + b); }

int sub(int a, int b) { return (a - b); }

int mul(int a, int b) { return (a * b); }

int div(int a, int b) { return (a / b); }