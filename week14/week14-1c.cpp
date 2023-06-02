#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if(a>=b && a>=c){
		printf("%d", a);
		if(b>=c && b<=a){
			printf("%d%d", b, c+1);
		}
		else printf("%d%d", c, b+1);
	}

	else if(b>=a && b>=c){
		printf("%d", b);
		if(a>=c && a<=b){
			printf("%d%d", a, c+1);
		}
		else printf("%d%d", c, a+1);
	}

	else if(c>=a && c>=b){
		printf("%d", c);
		if(a>=b && a<=c){
			printf("%d%d", a, b+1);
		}
		else printf("%d%d", b, a+1);
	}
}
