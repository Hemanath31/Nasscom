#include<stdio.h>
int main()
{
	int i,j,c=0,k,flag=0;
	char str1[20],str2[20],str3[20];
	printf("Enter the string");
	scanf("%s",str1);
	printf("enter the string");
	scanf("%s",str2);
        while(str1[i]!='\0')
	{
		str3[j]=str1[i];
         	i++;
	        j++;
	}i=0;
	while(str2[i]!='\0')
	{
		str3[j]=str2[i];
		i++;
		j++;
	}
	str3[j]='\0';
	printf("concatenated string: %s",str3);
        return 0;
}                 

