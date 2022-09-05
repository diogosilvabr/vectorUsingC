#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i, valor[7],verificar[5];

    for(i=0;i<7;i++) {
        printf("Digite um número qualquer: \n");
        scanf("%d", &valor[i]);

              if(valor[i]==0) {
                verificar[0]++;
            } if (valor[i]<0) {
                verificar[1]++;
            } if(valor[i]>0) {
                verificar[2]++;
            } if(valor[i] % 2 == 0) {
                verificar[3]++;
            } if(valor[i]%2!=0) {
                verificar[4]++;
            }
        }

        printf("NÚMEROS ZEROS: %d", verificar[0]);
        printf("\nNÚMEROS NEGATIVOS: %d", verificar[1]);
        printf("\nNÚMEROS POSITIVOS: %d", verificar[2]);
        printf("\nNÚMEROS PARES: %d", verificar[3]);
        printf("\nNÚMEROS ÍMPARES: %d", verificar[4]);
}
