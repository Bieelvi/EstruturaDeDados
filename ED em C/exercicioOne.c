#include <stdio.h>
#include <stdlib.h>


float calcAreaCirc(float r)
{
    float p = 3.14, area;
    area = p*(r*r);
    return area;
}

float calcVolumeCirc(float r)
{
    float p = 3.14, volume;
    volume = (4/3) * p * (r*r*r);
    return volume;
}


int main ()
{
    float raio,volume,area;

    printf("Digite a merda do RAIO DA CIRCUFODASE \n");
    scanf("%f",&raio);
    area = calcAreaCirc(raio);
    printf ("A area da circunfodase eh de %f \n",area);
    volume = calcVolumeCirc(raio);
    printf ("O volume da circunfodase eh de %f \n",volume);
}
