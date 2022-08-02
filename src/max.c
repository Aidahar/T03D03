#include <stdio.h>

int max(int a, int b);

int main() {
    int a, b;
    char c;
    scanf("%d%d%c", &a, &b, &c);
    if (c == '\n') {
        printf("%d\n", max(a, b));
    } else {
        printf("n/a\n");
    }

    return 0;
}

int max(int a, int b) { return a > b ? a : b; }