#include<stdio.h>
int main()
{
	int num,temp,digit,fact,sum=0,i;
	printf("enter the number");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
		digit=num%10;
		fact=1;
		for(i=1;i<=digit;i++)
			fact=fact*i;
		sum=sum+fact;
		num=num/10;
	}
	if(sum=temp)
		printf("strong");
	else
		printf("not strong");
}
