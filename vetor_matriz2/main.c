#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i, valor[7],verificar[5];

    for(i=0;i<7;i++) {
        printf("Digite um n�mero qualquer: \n");
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

        printf("N�MEROS ZEROS: %d", verificar[0]);
        printf("\nN�MEROS NEGATIVOS: %d", verificar[1]);
        printf("\nN�MEROS POSITIVOS: %d", verificar[2]);
        printf("\nN�MEROS PARES: %d", verificar[3]);
        printf("\nN�MEROS �MPARES: %d", verificar[4]);
}
