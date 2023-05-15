#include <stdio.h>
int main()
{
	int a, b[10];
	scanf("%d", &a);
	for(int i=0; i<a; i++){
		scanf("%d", &b[i]);
		b[i]=b[i]*b[i];
		printf("%d,", b[i]);
	}

	printf("\n");
}
