#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,max,count=0;
    printf("���������֣�");
    scanf("%d",&i);
    max=i;
    if(max<=0) return 0;
    while(i>0){
        if(max<i){
            max=i;
        }
        printf("���������֣�");
        scanf("%d",&i);
        count++;
    }
    printf("The max of %d input integer is %d",count,max);
    return 0;
}
