#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int aux = 0;
    scanf("%d %d %d", &a, &b, &c);
    if (a < b){
      aux = a;
      a = b;
      b = aux;
    }
    if (a < c){
      aux = a;
      a = c;
      c = aux;
    }
    if (b < c){
      aux = b;
      b = c;
      c = aux;
    }
    if (a >= b + c){
        printf("Invalido\n");
    }
    else{
        if (a == b && b == c){
            printf("Valido-Equilatero\n");
        }
        else if (a == b || a == c || b == c){
            printf("Valido-Isoceles\n");
        }
        else{
            printf("Valido-Escaleno\n");
        }
        if (a * a == (b * b) + (c * c)){
            printf("Retangulo: S\n");
        }
        else{
            printf("Retangulo: N\n");
        }
    }

    return 0;
}
