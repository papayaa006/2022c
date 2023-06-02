#include <stdio.h>
int main()
{
	int a, b=0, sum=0;
	scanf("%d", &a);
	for(int i=1; i<=a; i++){
		b=(2*i+1);
		sum+=b;
	}
	printf("f(%d)=%d", a, sum+1);
}
