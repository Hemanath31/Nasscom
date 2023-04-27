#include<stdio.h>
int main()
{
	int temp,num=456,digit,sum=0;
//num=temp;
while(num>0)
{
	digit=num%10;
	sum=sum+digit;
	num=num/10;
}
printf("sum of digits %d",sum);
}

