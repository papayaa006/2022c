#include <stdio.h>
int f(int n)
{
	if(n<0)	return -n;
	else return n;
}
int main()
{
	int a, b, c, d;
	scanf("%d%d%d%d", &a, &b, &c, &d);

	int x=c-a;
	int y=d-b;

	int n=x*y;
	printf("%d", f(n));
}
