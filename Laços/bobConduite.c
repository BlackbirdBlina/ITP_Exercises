#include <stdio.h>

int main() {
    int qtdtest;
    int i;
    int R1;
    int R2;
    scanf("%d", &qtdtest);
    for(i=0; i<qtdtest; i++){
        scanf("%d %d", &R1, &R2);
        printf("%d\n", R1 + R2);
    }
    return 0;
}
