#include<stdio.h>
#include<math.h> 
int main()
{
	int number,n,m,power,result=0,digit=1;
	scanf("%d",&number);
	do{
		m=digit;
		digit--;
		n=number%10;
		if(n%2==m%2){
			power=pow(2,digit);
			result+=power;
			}else{
			  result+=0;
		}
		number/=10;
		digit+=2;
	}while(number!=0);
	printf("%d",result);
    return 0;
	
 } 
