#include <stdio.h>
int main() {
    int num, resto;
    scanf("%d", &num);
    resto = num % 2;
    if (resto == 0)
    {
        printf("%d, Par, restoeh \n", num);
    }
    else
    {
        printf("%d, Impar, resto eh\n", num);
    }
    return 0;

}