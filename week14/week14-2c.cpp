#include <stdio.h>
int main()
{
	int ans=0, min=99999;
	int a[10];
	for(int i=0; i<10; i++){
		scanf("%d", &a[i]);
		if(a[i]<min){
			ans=i;
			min=a[i];
		}
	}
	ans=ans+1;


	printf("%d %d\n", ans, 4320/min);
}









