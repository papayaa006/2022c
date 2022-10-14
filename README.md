# 2022c
資傳一甲程式設計的程式倉庫
# week06 架鷹架
```cpp
#include <stdio.h>
int main ()
{
    for(int a=1; a<6; a++)
    {
        int star= a*2-1;
        printf("鷹架:%d樓 %d星\n", a, star);
    } 
}
```
# 星星金字塔
```cpp
#include <stdio.h>
int main ()
{
    for(int a=1; a<6; a++)
    {
        int star= a*2-1
        int space= 5-a;
        for(int b=0; b<space; b++)
        {
            printf(" ");
        }
        for(int b=0; b<star; b++)
        {
            printf("*")
        }
        printf("鷹架:%d樓 %d空格 %d星\n", a, space, star);
    } 
    
}
```
# 暴力解公因數
```cpp
#include <stdio.h>
int main ()
{
    printf("請輸入2個數: ");
    int a, b, ans;
    scanf("%d%d", &a, &b);
    for(int i=1; i<=a; i++)
    {
        if(a%i==0 && b%i++0) ans=i;
    }
    printf("找到ans:%d", ans);
}
```
# 輾轉法
```cpp
#include <stdio.h>
int main ()
{
    printf("請輸入兩個數字: ");
    int a, b, c;
    scanf("%d%d",&a &b);
    
    while(1)
    {
        c=a%b;
        printf("a:%d b:%d c:%d\n", a, b, c);
        a=b;
        b=c;
    }
    printf("中的是:%d", b);
}
```
# if(放什麼都行，但不能放零。)
```
#include <stdio.h>
int main ()
{
    int a=10;

    if(-999) printf("-999成立\n");
    if(-3) printf("-3成立\n");
    if(-2) printf("-2成立\n");
    if(-1) printf("-1成立\n");
    if(0) printf("0成立\n");
    if(1) printf("1成立\n");
    if(2) printf("2成立\n");
    if(3) printf("3成立\n");
    if(4) printf("4成立\n");
    if(999) printf("999成立\n");
    if("a==0") printf("不管什麼東西，幾乎都成立\n");
}
```
