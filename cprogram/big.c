#include<stdio.h>
int main()
{
	int num,max=0,digit;
	printf("enter the number");
	scanf("%d",&num);
	while(num>0)
	{
	digit=num%10;
	if(digit>max)
	max=digit;
	num=num/10;
	}
	printf("biggest digit is %d",max);
}
