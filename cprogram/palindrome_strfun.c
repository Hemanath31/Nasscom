#include<stdio.h>
#include<string.h>
int main()
{
	int k;
	char str1[20],str2[20];
	printf("Enter the number");
	scanf("%s",str1);
        strcpy(str2,str1);
	strrev(str2);
	k=strcmp(str2,str1);
	
if(k==1)
	printf("not palindrome");
	else
	printf("palindrome");
}                 

