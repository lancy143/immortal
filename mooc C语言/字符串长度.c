#include<stdio.h>
int len(char *s);
int main()
{
	int x=0;
	char sentence[100]; //����ȫ���� 

	gets(sentence);//��ȡ�ַ��������ո� 
	printf("%s�ĳ���Ϊ��",sentence) ;
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
		 printf("%d ",cnt);//��printfλ������-->������һ���ո����ʾ0 
 		 cnt=0;
 		}
		 }
	printf("%d",cnt);
	return;
}
 /*int len(char *s)�ݹ� 
 {
 	if(*s!='\0')
	 return(len(++s)+1) ;
	else 
	return 0;
 }*/
