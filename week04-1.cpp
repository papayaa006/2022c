#include <stdio.h>
int main ()
{
    printf("�п�J�褸�~");
    int a;
    scanf("%d",&a);
    if(a%400==0) printf("�|�~");
    else if(a%100==0) printf("���~");
    else if(a%4==0) printf("�|�~");
    else printf("���~");
}
