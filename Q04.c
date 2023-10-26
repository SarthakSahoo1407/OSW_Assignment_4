#include <stdio.h>
int main()
{
    int x, y, m, e;
    scanf("%d%d", &m, &e);
    x = m;
    y = 1;
    while (x - y > e)
    {
        x = (x + y) / 2;
        y = m / x;
    }
    printf("%d", x);
}