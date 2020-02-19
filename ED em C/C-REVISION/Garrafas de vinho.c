#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int cont;
    float valor = 0, lucro = 0;

    for (cont=1;cont<=5;cont++)
    {
        printf ("Qual foi o valor da garrafa? \n");
        scanf ("%f",&valor);

        lucro = valor < 100 ? 50:30;

        printf ("O preço da venda será de %f \n",(valor+lucro));


    }

}
