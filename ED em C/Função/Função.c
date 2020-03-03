#include <stdio.h>
#include <stdlib.h>

int subtraiDoisValores(int a, int b)
{
    int resultado;
    resultado = a-b;
    return resultado;
}

int main ()
{
    int ex1, ex2, n1, n2;
    ex1 = subtraiDoisValores(100, 8);
    printf("Exemplo 1: %d \n", ex1);
    printf("Digite dois valores: \n");
    scanf("%d %d", &n1, &n2);
    ex2 = subtraiDoisValores(n1, n2);
    printf("o resultado: %d", ex2);
    return 0;
}
