#include <stdio.h>
#include <math.h>

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

// calcula a formula n^p
int arranjo_com_repeticao(int n, int p)
{
    return pow(n, p);
}

int main()
{
    // Arranjo de 4 itens, 3 a 3.
    arranjo_simples(4, 3);
    arranjo_simples_alternativo(4, 3);

    // Arranjo de 3 itens, 2 a 2 com repetição
    arranjo_com_repeticao(3, 2);
}