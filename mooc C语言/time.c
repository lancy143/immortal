#include<stdio.h>
int main()
{
	/*UTC=BJT-8*/
	int UTC,BJT;
	scanf("%d",&BJT);
	UTC=BJT-800;
	if(UTC<0){
		UTC+=2400;
	}
		printf("%d",UTC);
	
	return 0;
}