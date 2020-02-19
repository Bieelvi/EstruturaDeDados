#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int i=0;
    int cont=0, soma=0;


    while (i<5)
    {
        printf ("Digite numeros inteiros");
        scanf("%i",&cont);
        soma+=cont;
        i++;

    }
    printf ("A soma dos numeros foi de %i",soma);

}
