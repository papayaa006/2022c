#include <stdio.h>
int main()
{
	int a, b=0, d=1;
	int c[100];
	scanf("%d", &a);
	int ans=0;
	for(int i=1; i<=a; i++){
		if(a%i==0){
		c[d]=i;
		ans++;
		b++;
		d++;
		}
	}
	if(ans%2==1)	printf("%d", c[b/2+1]);
	else printf("0");
}









