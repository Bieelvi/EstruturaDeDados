#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float n1,n2,media;

    printf (" \n Digite a nota 1 \n");
    scanf ("%f",&n1);
    printf (" \n Digite a nota 2 \n");
    scanf ("%f",&n2);
    media = (n1+n2)/2;
    printf ("\n A media eh %f",media);
    if (media>=6)
    {
        printf("\n O aluno foi aprovado");
    }
    else
    {
        printf ("\n O aluno foi reprovado");
    }



}
