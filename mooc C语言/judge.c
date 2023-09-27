#include<stdio.h>
main()
{
	int number,count1=-1,count2=0;
	do{
		scanf("%d",&number);
		if(number%2!=0){
			count1++;	}
		else count2++;
	} while(number!=-1);
	printf("%d %d",count1,count2);
	return 0;
 } 
