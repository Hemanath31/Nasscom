#include<stdio.h>
int main()
{
	int i,c=0,k;
	char str1[5],str2[20];
	gets(str1);
	while(str1[c]!='\0')
	{
	c++;
	}
	for(i=0,k=c-1;i<c;i++,k--)
	{
	str2[i]=str1[k];
	}
	str2[i]='\0';
	printf("the reverse string is %s",str2);
}
