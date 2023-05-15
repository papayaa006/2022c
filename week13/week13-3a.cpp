
#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	a=a/10;
	a=a/10;
	a=a/10;
	for(int i=0; i<10; i++){
		if(a>10)	a=a%10;
		else break;
	}
	printf("%d", a);
}
