#include <stdio.h>
#include <stdlib.h>

int CoisasQuadraticas(float lado) {
    float lado, *area, *perimetro, *diagonal;

    *area = lado * lado;
    *perimetro = lado * 4;
    *diagonal = lado * 1.41;

}

int main()
{
    float area, perimetro, diagonal, lado;

    printf(" Digite o numero do lado do QUADRADO \n");
    scanf("%f",&lado);

    CoisasQuadraticas(&area,&perimetro,&diagonal,lado);
    printf("A area eh %f , a merda do perimetro eh %f , e a porra da diagonal de merda eh %f \n",*area, *perimetro, *diagonal);
    return 0;
}
