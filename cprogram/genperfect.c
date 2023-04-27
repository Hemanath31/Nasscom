#include<stdio.h>
int main()
{
	int num,i,sum=0,j;
	for(j=1;j<=100000;j++)
	{
		sum=j;
	for(i=1;i<num;i++)
	{
		if(num%i==0){
			sum=sum+i;
		printf("\n divisor %d",i);
	}
	}

	if(sum==num)
		printf("%d",num);
	} 
