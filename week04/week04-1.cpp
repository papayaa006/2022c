#include <stdio.h>
int main()
{
    int a=10;
    printf("a的住址在:%d\n", a);
    printf("a的住址在:%d\n", &a);

    int b=20;
    printf("b的住址在:%d\n", b);
    printf("b的住址在:%d\n", &b);

    int c=30;
    printf("c的住址在:%d\n", c);
    printf("c的住址在:%d\n", &c);
}
