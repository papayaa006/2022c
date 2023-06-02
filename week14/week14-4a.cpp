#include <stdio.h>
int main()
{
	int h, m, s;
	scanf("%d", &s);
	h=s/3600;
	m=s/60%60;
	s%=60;
	if(h<10)	printf("0%d:", h);
	else printf("%d:", h);
	if(m<10)	printf("0%d:", m);
	else printf("%d:", m);
	if(s<10)	printf("0%d", s);
	else printf("%d", s);
	return 0;
}








  瘋狂程設
西子灣碼場 迎曦湖碼場
福山碼場 圓山碼場
福源山碼場 山仔頂碼場
兔子坑碼場 豆子埔碼場






