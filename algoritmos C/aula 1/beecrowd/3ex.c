#include <stdio.h>
int main(){
    const double PI = 3.14159;
    double a, b, c, result;
    scanf("%lf %lf %lf", &a, &b, &c);
    result = (a * c) / 2;
    printf("TRIANGULO: %0.3lf\n", result);

    result = PI * c * c;
    printf("CIRCULO: %0.3lf\n", result);

    result = ((a + b) * c) / 2;
    printf("TRAPEZIO: %0.3lf\n", result);

    result = b * b;
    printf("QUADRADO: %0.3lf\n", result);

    result = a * b;
    printf("RETANGULO: %0.3lf\n", result);
    return 0;
}