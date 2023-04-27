#include<stdio.h>
int main()
{
	int i,c=0,k,flag=0;
	char str1[20],str2[20];
	printf("Enter the number");
	scanf("%s",str1);
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
        for(i=0;i<c;i++)
	{ 
		if(str1[i]!=str2[i])
		 flag=0;
		break;
	}
if(flag==1)
	printf("not palindrome");
	else
	printf("palindrome");
}                 

