#include <stdio.h>

char* crack(float a, float b);

int main() {
    float a, b;
    char c;
    
    if (scanf("%f%f%c", &a, &b, &c) != 3 && c != '\n') {
        printf("Incorrect input\n");
        return 1;
    }
    printf("%s\n", crack(a, b)); 
    return 0;
}

char* crack(float a, float b) {
    return (a * a + b * b < 25) ? "GOTCHA" : "MISS";
}
