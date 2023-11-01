#include <stdio.h>

int fun(n)
{
    int count =0;
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j < n; j++)
        {
            printf("%d %d\n", i, j);
            count++;
        }
    }
    printf("%d",count);
    return 1;
}

int main(){
    fun(5);
}