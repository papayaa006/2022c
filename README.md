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
# long long int
```cpp
#include <stdio.h>
 int main ()
 {
     int n=12345678;
     printf("%d\n", n);
     long long int a=1234567812345678;
     printf("%lld\n", a);
 }
 ```
 
 # 暴力解公因數(long long int)
 ```cpp
 #include <stdio.h>
int main ()
{
    long long int a, b;
    scanf("%lld%lld", &a, &b);
    long long int ans;
    for(long long int i=1; i<=a ; i++)
    {
        if(a%i==0 && b%i==0) ans=i;
    }
    printf("答案是：%lld\n", ans);
}
```
# 輾轉相除法(long long int)
```cpp
#include <stdio.h>
int main ()
{
    long long int a , b , c;
    scanf("%lld%lld", &a, &b);
    while(1)
    {
        c = a%b;
        printf("%lld%lld%lld\n", a, b, c);
        if(c==0) break;
        a=b;
        b=c;
    }
    printf("答案是%lld\n", b);
}
```

# 剝皮法
```cpp
#include <stdio.h>
int main ()
{
    int n=123456789;
    while(n>0)
    {
        printf("個位數是%d\n", n%10 );
        n=n/10;
    }
}
```

# 用兩個for迴圈畫出三角形
```cpp
#include <stdio.h>
int main ()
{
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++)
		{
			for(int k=1; k<=n; k++)
			{
				if(k<=n-i) printf(" ");
				else printf("*");
			}
			printf("\n");
		}
}
```

# 用兩個while迴圈畫出直角三角形
```cpp
#include <stdio.h>
int main ()
{
	int n;
	scanf("%d", &n);
	
	int i=1;
	while(i<=n)
	{
		int k=1;
		while(k<=n)
		{
			if(k<=n-i) printf(" ");
			else printf("*");
			k++;
		}
		printf("\n");
		i++;
	}
}
```
# 判別質數
```cpp
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
```
# 列出所有的質數
```cpp
#include <stdio.h>
int main ()
{
	int a;
	scanf("%d", &a);
	
	for(int n=2; n<=a; n++)
	{
		
		int bad=0;
		for(int i=2; i<n; i++)
		{
			if(n%i==0) bad=1;
		}
		if(bad==0) printf("%d ", n);
	}
}
```

#陣列
```cpp
#include <stdio.h>
int main ()
{
    int a[4]={10, 20, 30, 40};

    printf("a[0]:%d\n", a[0] );
    printf("a[1]:%d\n", a[1] );
    printf("a[2]:%d\n", a[2] );
    printf("a[3]:%d\n", a[3] );
}
```

#陣列
```cpp
#include <stdio.h>
int main ()
{
    int a[4]={10, 20, 30, 40};
    for(int i=0; i<4; i++)
    {
        printf("a[%d]: %d\n", i, a[i]);
    }

    for(int i=3; i>=0; i--)
    {
        printf("%d ", a[i]);
    }
}
```
