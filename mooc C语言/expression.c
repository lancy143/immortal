#include<stdio.h>
int main()
{
	int number,x,count=1,d;
	scanf("%d",&number);
	if(number<0){
		printf("fu ");
		number=0-number;
	}x=number;
	while(x>9){
		x/=10;
		count*=10;
	}
	while(count>0){
	
	d=number/count;
	switch(d){
		case 1:
			printf("yi");
			break;
		case 2:
			printf("er");
			break;
		case 3:
			printf("san");
			break;
		case 4:
			printf("si");
			break;
		case 5:
			printf("wu");
			break;
		case 6:
			printf("liu");
			break;
		case 7:
			printf("qi");
			break;
		case 8:
			printf("ba");
			break;
		case 9:
		    printf("jiu");
		    break;
		case 0:
			printf("ling");
			break;
		
	}
    if(count>1)printf(" ");
	number%=count;
    count/=10;
}
return 0;
}
