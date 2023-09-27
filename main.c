#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,max,count=0;
    printf("请输入数字：");
    scanf("%d",&i);
    max=i;
    if(max<=0) return 0;
    while(i>0){
        if(max<i){
            max=i;
        }
        printf("请输入数字：");
        scanf("%d",&i);
        count++;
    }
    printf("The max of %d input integer is %d",count,max);
    return 0;
}
