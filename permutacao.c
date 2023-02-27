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

// calcula a formula -> n!
int permutacao_simples(int n)
{
    return fatorial(n);
}

int permutacao_com_repeticao(int n, int values[], int values_size)
{
    int aux = 1;
    for (int i = 0; i < values_size; i++)
    {
        aux *= fatorial(values[i]);
    }

    return fatorial(n) / aux;
}

int permutacao_circular(int n)
{
    return fatorial(n - 1);
}

int main()
{
    // permutação simples
    permutacao_simples(5);

    // permutação com repetição
    // quantidade de vezes que cada um dos valores se repete
    int values[] = {3, 2, 1};
    // tamanho do vetor acima
    int qnt = 3;
    permutacao_com_repeticao(6, values, qnt);

    // permutacao circular
    permutacao_circular(6);
}