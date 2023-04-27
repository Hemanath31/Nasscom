#include<stdio.h>
int main()
{
	int temp,num=126,digit,sum=0;
num=temp;
while(num>0)
{
	digit=num%10;
	sum=sum+digit*digit*digit;
	num=num/10;
}
if(sum==temp)
printf("arm strong");
else
printf("not arm strong");
}

