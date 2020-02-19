#include <stdio.h>
#include <stdlib.h>

float calculaMedia(float n1, float n2, float n3)
{
    float media;
    media = ((n1+n2+n3)/3);
    return media;
}



int main ()
{
    float n1,n2,n3,media;
    int nAlunos,i;

    printf ("Quantos alunos tem nessa merda? \n");
    scanf ("%d", &nAlunos);

    for (i=1;i<=nAlunos;i++)
    {
        printf ("Digite as 3 notas do aluno %d: \n",i);
        scanf ("%f %f %f", &n1, &n2, &n3);
        media = calculaMedia (n1,n2,n3);
        printf ("A media do aluninho foi de %.2f \n", media);
    }

}
