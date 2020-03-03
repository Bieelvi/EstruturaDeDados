#include <stdio.h>
#include <stdlib.h>

int calcPositivo(int n1, int n2)
{
    int maiorNumero, menorNumero, contador = 0, i;

    maiorNumero = n1 > n2 ? n1 : n2;

    menorNumero = n1 < n2 ? n1 : n2;

    for (i = menorNumero; i <= maiorNumero; i++){
      contador += i;
    }

    return contador;

}

int main ()
{
    int n1, n2, resultado;

    printf("Digite dois numeros, um menor e um mais: \n");
    scanf("%d %d", &n1, &n2);

    resultado = calcPositivo(n1, n2);

    printf("Resultado: %d\n",resultado);
}
