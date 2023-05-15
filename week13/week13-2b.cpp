#include <stdio.h>
int main()
{
	int a, ans=0;
	scanf("%d", &a);
	while(a!=0){
		ans=ans*10+a%10;
		a=a/10;
	}

	printf("%d\n", ans);
}
