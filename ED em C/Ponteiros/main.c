#include <stdio.h>
#include <stdlib.h>

int MaiorMenor (int *maior, int *menor){
    if (*maior > *menor){
        *maior = *maior;
        *menor = *menor;
    }
    else {
        *menor = *maior;
        *maior = *menor;
    }
}

int main()
{
    int maior, menor;

    printf("Digite dois valores inteiros: \n");
    scanf("%d %d", &maior, &menor);

    MaiorMenor(&maior, &menor);

    printf("Maior Valor: %d\n",maior);
    printf("Menor Valor: %d\n",menor);

    return 0;
}
