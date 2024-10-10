#include <stdio.h>

int main()
{
    int n = 0;
    int i = 0;
    int numero = 0;
    int mult2 = 0;
    int mult3 = 0;
    int mult4 = 0;
    int mult5 = 0;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &numero);
        if(numero%2 == 0){
            mult2 += 1;
        }
        if(numero%3 == 0){
            mult3 += 1;
        }
        if(numero%4 == 0){
            mult4 += 1;
        }
        if(numero%5 == 0){
            mult5 += 1;
        }
    }
    printf("%d Multiplo(s) de 2\n", mult2);
    printf("%d Multiplo(s) de 3\n", mult3);
    printf("%d Multiplo(s) de 4\n", mult4);
    printf("%d Multiplo(s) de 5\n", mult5);
    return 0;
}
