#include <stdio.h>
#include <math.h>

float func(float x);

int main() {
    float x;
//    char c;
//    scanf("%f%c", &x, &c); 
    if (scanf("%f", &x) != 1 || x == 0.0) {
//    if ((c != '\n') || (x == 0.0)) {
        printf("n/a\n");
        return 1;
    } else {
        printf("%.1f\n", func(x));
    }
    return 0;
}

float func(float x) {
    return 0.007 * pow(x, 4) + ((22.8 * pow(x, 1. / 3.) - 1000) * x + 3) / (x * x / 2) -
           x * pow((10 + x), (2. / x)) - 1.01;
}
