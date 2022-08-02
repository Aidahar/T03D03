#include <stdio.h>

char* crack(float a, float b);

int main() {
    float a, b;
    char c;
    
    scanf("%f%f%c", &a, &b, &c);  
    if (c != '\n') {
        printf("Incorrect input\n");
        return 1;
    }
    printf("%s\n", crack(a, b)); 
    return 0;
}

char* crack(float a, float b) {
    return (a * a + b * b < 25) ? "GOTCHA" : "MISS";
}