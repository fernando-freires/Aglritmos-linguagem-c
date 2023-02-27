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

// calcula a formula -> n! / p! * (n - p)!
int combinacao_simples(int n, int p)
{
    return fatorial(n) / (fatorial(p) * fatorial(n - p));
}

// calcula a formula -> (n + p - 1)! / p! * (n - 1)!
int combinacao_composta(int n, int p)
{
    return fatorial(n + p - 1) / (fatorial(p) * fatorial(n - 1));
}

int main()
{
    // casos em que P <= N
    // combinação de 4 elementos, 2 a 2
    combinacao_simples(4, 2);

    // casos em que P > N
    // combinação de 3 elementos, 4 a 4 (?)
    combinacao_composta(3, 4);
}