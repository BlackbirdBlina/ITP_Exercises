#include <stdio.h>

int main()
{
    int a;
    int b;
    int q;
    int r;
    scanf("%d %d", &a, &b);
    q = a/b;
    r = a%b;
    if (r < 0 && b > 0) {
        r += b;
        q--;
    } else if (r < 0 && b < 0) {
        r -= b;
        q++;
    }
    printf("%d %d\n", q, r);
}


