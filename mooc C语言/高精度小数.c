#include<stdio.h>
/*形如
a/b的两个数，其中10<=a<b<100。也就是说，这个小数一定是小于1的正数。
提示：输入是带着两个数中间的“/”的，所以scanf应采用“%d/%d”这样的输入格式。
输出格式：
形如0.xxxxxxxxx的小数，小数点后最多200位。输出结束的时候要带着回车换行。如果a/b是一个有限不循环小数，则输出完所有的有效位就可以了，不需要再输出后面的0来凑满200位。

而除法的过程，则可以模仿人工列竖式做除法的方式，先将被除数乘以10，
得到一位商以后，将余数乘以10作为下一轮计算的被除数：

    160/19->8余8

    80/19->4余4*/
int main()
{
	int dividend=0,divisor=0,x,i=0;
	int ret=0;
	scanf("%d/%d",&dividend,&divisor);
	printf("0.");		
	for(i=2;i<=200&&dividend!=0;i++)
	{
		dividend*=10;
		x=dividend/divisor;
		dividend=dividend%divisor;
		ret=x;
		printf("%d",ret);
	
	}
	
	printf("\n");
	return 0;
}
	 
