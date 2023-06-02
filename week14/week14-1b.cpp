#include <stdio.h>
int main()
{
	int a, b, c=0;
	scanf("%d%d", &a, &b);
	for(int i=a; i<=b; i++){
		int s=0;
		for(int j=2; j<i; j++){
			if(i%j==0)	s=1;
		}
		if(s==0)	c++;
	}
	printf("%d\n", c);
}
