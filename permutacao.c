#include <stdio.h>
#include <math.h>

// Calcula o fatorial de n
double fatorial(double n)
{
    double result = 1;
    for (int i = n; i > 1; i--)
        result *= i;
    return result;
}

// calcula a formula -> n!
double permutacao_simples(double n)
{
    return fatorial(n);
}

double permutacao_com_repeticao(double n, double values[], double values_size)
{
    double aux = 1;
    for (int i = 0; i < values_size; i++)
    {
        aux *= fatorial(values[i]);
    }

    return fatorial(n) / aux;
}

double permutacao_circular(double n)
{
    return fatorial(n - 1);
}

double main()
{
    // permutação simples
    permutacao_simples(5);

    // permutação com repetição
    // quantidade de vezes que cada um dos valores se repete
    double values[] = {3, 2, 1};
    // tamanho do vetor acima
    double qnt = 3;
    permutacao_com_repeticao(6, values, qnt);

    // permutacao circular
    permutacao_circular(6);
}