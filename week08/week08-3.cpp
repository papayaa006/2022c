#include <stdio.h>
int main ()
{
    printf("判斷一個數是不是質數:");
    int n;
    scanf("%d", &n);

    int bad=0;
    for(int i=2; i<n; i++)
    {
        if(n%i==0) bad=1;
    }
    if(bad==0) printf("%d是質數", n);
    else printf("%d不是質數", n);
}
