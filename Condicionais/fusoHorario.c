#include <stdio.h>

int main()
{
    int s = 0;
    int t = 0;
    int f = 0;
    int h = 0;
    scanf("%d %d %d", &s, &t, &f);
    h = (s + t + f)%24;
    if (h < 0) {
        h += 24;
    }
    printf("%d\n", h);
    return 0;
}
