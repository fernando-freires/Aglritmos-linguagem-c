#include <stdio.h>

// Calcula o fatorial de n
int fatorial(int n)
{
    int result = 1;
    for (int i = n; i > 1; i--)
        result *= i;
    return result;
}

// calcula a formula -> n! / (n-p)!
int arranjo_simples(int n, int p)
{
    return fatorial(n) / fatorial(n - p);
}

int arranjo_simples_alternativo(int n, int p)
{
    int result = 1;
    for (int i = 0; i < p; i++)
    {
        result *= n;
        n--;
    }
    return result;
}

int main()
{
    // Arranjo de 4 itens, 3 a 3.
    arranjo_simples(4, 3);
    arranjo_simples_alternativo(4, 3);
}