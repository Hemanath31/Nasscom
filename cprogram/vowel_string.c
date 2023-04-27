#include<stdio.h>
int main()
{
	int i=0,j=0,vow=0;
	char str1[20];
	printf("Enter a string");
	scanf("%s",str1);
	while(str1[i]!='\0')
	{
		if(str1[i]=='a' ||  str1[i]=='e' || str1[i]=='i' || str1[i]=='o'  ||   str1[i]=='u')
			vow++;
		i++;
	}
	printf("number of vowels %d",vow);
}
