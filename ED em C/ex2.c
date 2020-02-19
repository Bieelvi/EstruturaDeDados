#include <stdio.h>
#include <stdlib.h>

int calcPositivo(int n1, int n2)
{
    int maiorNumero, menorNumero, contador;

    maiorNumero = n1 > n2 ? n1 : n2;

    menorNumero = n1 < n2 ? n1 : n2;

    while (menorNumero <= maiorNumero)
    {
        contador += menorNumero;
    }

}

int main ()
{

}
