#include <stdio.h>
#include <stdlib.h>


float somaSub(int op,float n1, float n2)
{
    float resultado;

    switch (op)
    {
        case 1:
        resultado = n1+n2;
        break;
        case 2:
        resultado = n1-n2;
        break;
        case 3:
        resultado = n1*n2;
        break;
        case 4:
        resultado = n1/n2;
        break;
        default: printf ("Esta dificil mermao. \n");
    }

    return resultado;
}





int main ()
{
    int op;
    float n1,n2, resultado;
    char operacao=0;
    printf ("Digite 1 para somar ou 2 para subtrair 3 para multiplicar e 4 para dividir \n");
    scanf ("%d",&op);

    printf ("Digite dois numeros para efetuar a operacao \n");
    scanf ("%f %f",&n1, &n2);


    resultado = somaSub (op,n1,n2);
    printf ("O resultado de %.2f ",resultado);

}
