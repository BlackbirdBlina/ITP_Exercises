#include <stdio.h>

int main() {
    int i;
    int j;
    int controle;
    int num;
    int num_test;
    scanf("%d", &num);
    for (i=1; i<=num; i++){
        scanf("%d", &num_test);
        controle = 1;
        for (j=2; j<num_test; j++){
            if (num_test%j == 0){
                controle = 0;
                break;
            }
        }
        if (controle == 0){
            printf("%d nao eh primo\n", num_test);
        }
        else{
            printf("%d eh primo\n", num_test);
        }
    }
    return 0;
}
