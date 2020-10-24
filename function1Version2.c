#include <stdio.h>

int power(int base, int n);


int main()
{
    int n;
    n = 3;
    
    printf("n = %d El resultado de la potencia = %d\n", n, power(2, n));

    printf("El valor del exponente n original sigue siendo: %d", n);
    return 0;
}

int power (int base, int n)

{
    int p;

    for (p = 1; n > 0; n--)
    {
        p = p * base;
        printf("El valor temporal de n es: %d\n", n);
    }
    return p;
    
}