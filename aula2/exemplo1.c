#include <stdio.h>
int main () 
{
    float saldo;
    scanf("%f", &saldo);
    if (saldo > 0);
    {
        printf("%0.2f saldo positivo\n", saldo);
    }
    return 0;
}
// importar arquivo com nome gcc -o 'nome' nome do arquivo