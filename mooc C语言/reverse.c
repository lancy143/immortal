#include <stdio.h>
int main()
{
	int A,a,b,c;
	scanf("%d",&A);
	a=A/100;
	b=(A-a*100)/10*10;
	c=(A-a*100-b)*100;
	printf("%d",a+b+c);
	return 0;
	}