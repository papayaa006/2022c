#include <stdio.h>
int main ()
{
    for(int a=1; a<=9; a++)
    {
        for(int b=1; b<=9; b++)
        {
            printf("%d*%d=%2d ",b, a, a*b);
        }
        printf("\n");
    }
}
