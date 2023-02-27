#include <stdio.h>
#include <math.h>

// calcula a formula n^p
int arranjo_com_repeticao(int n, int p)
{
    return pow(n, p);
}

int main()
{
    // Arranjo de 3 itens, 2 a 2 com repetição
    arranjo_com_repeticao(3, 2);
}