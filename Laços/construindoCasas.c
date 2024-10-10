#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    int b;
    int c;
    int t;
    scanf("%d", &a);
    while(a != 0){
        scanf("%d %d", &b, &c);
        //printf("%d %d %d\n", a, b, c);
        t = (a * b * 100)/c;
        printf("%d\n", (int)sqrt(t));
        scanf("%d", &a);
    }
    return 0;
}
