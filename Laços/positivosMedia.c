#include <stdio.h>

int main() {
    int i;
    float num;
    int contador = 0;
    float media = 0;
    float soma = 0;
    for (i=1; i<=6; i++){
        scanf("%f", &num);
        if(num > 0){
            contador = contador + 1;
            soma = soma + num;
            media = soma/contador;
        }
    }
    printf("%d valores positivos\n", contador);
    printf("%.1f\n", media);

    return 0;
}
