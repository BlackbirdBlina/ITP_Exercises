#include <stdio.h>

int main() {
    int i;
    float num;
    int contador = 0;
    for (i=1; i<=6; i++){
        scanf("%f", &num);
        if(num > 0){
            contador = contador + 1;
        }
    }
    printf("%d valores positivos\n", contador);

    return 0;
}
