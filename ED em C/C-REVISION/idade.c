#include <stdio.h>
#include <stdlib.h>


int main ()
{
    int idade=0,maioridade=0;


        while (idade>=0)
        {

            printf ("Digite a idade");
            scanf ("%d",&idade);
            maioridade= idade > maioridade ? idade:maioridade;


        }

        printf ("A maior idade foi %d",maioridade);

}
