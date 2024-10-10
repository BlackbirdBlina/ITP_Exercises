#include <stdio.h>

int main() {
    int reclamacao;
    while(scanf("%d", &reclamacao) != EOF){
        if(reclamacao >= 0 && reclamacao <= 100){
            if(reclamacao == 0){
                printf("vai ter copa!\n");
            }
            else{
                printf("vai ter duas!\n");
            }
        }
        else {
            break;
        }

    }
    return 0;
}
