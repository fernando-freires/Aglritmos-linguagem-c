#include <stdio.h>
#include <math.h>

// Calcula o fatorial de n
double fatorial(double n)
{
    double result = 1;
    for (double i = n; i > 1; i--)
        result *= i;
    return result;
}

// calcula a formula -> n! / (n-p)!
double arranjo_simples(double n, double p)
{
    return fatorial(n) / fatorial(n - p);
}

double arranjo_simples_alternativo(double n, double p)
{
    double result = 1;
    for (double i = 0; i < p; i++)
    {
        result *= n;
        n--;
    }
    return result;
}

// calcula a formula n^p
double arranjo_com_repeticao(double n, double p)
{
    return pow(n, p);
}

double main()
{
    // Arranjo de 4 itens, 3 a 3.
    arranjo_simples(4, 3);
    arranjo_simples_alternativo(4, 3);

    // Arranjo de 3 itens, 2 a 2 com repetição
    arranjo_com_repeticao(3, 2);
}