#include<stdio.h>
int len(char *s);
int main()
{
	int x=0;
	char sentence[100]; //？安全输入 

	gets(sentence);//读取字符串包括空格 
	printf("%s的长度为：",sentence) ;
	len(sentence); 
	return 0;
 } 
int i=0,cnt=0;
int len(char *s)
 {
 	while(s[i]!='\0'){
 		if(s[i]!=' '){
		 	i++;
 			cnt++;
		 }
 		else 
 		{i++;
		 printf("%d ",cnt);//？printf位置问题-->多输入一个空格会显示0 
 		 cnt=0;
 		}
		 }
	printf("%d",cnt);
	return;
}
 /*int len(char *s)递归 
 {
 	if(*s!='\0')
	 return(len(++s)+1) ;
	else 
	return 0;
 }*/
