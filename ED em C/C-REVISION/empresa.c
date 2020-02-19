#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float imc=0;
    float peso=0;
    float altura=0;
    int i=0;

    while (i>=0)
    {
        printf ("Digite A sua altura v");
        scanf ("%f",&altura);
        printf ("Digite O seu peso \n");
        scanf ("%f",&peso);

        imc=(peso/(altura)*2);

        if (imc > 30)
        {
            printf ("Voce esta gordo, seu imc eh de %f \n",imc);
        }
        else
        {
            printf ("Voce esta magrelo, teu imc eh de %f \n",imc);
        }

    }
}
