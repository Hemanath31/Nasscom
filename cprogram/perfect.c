#include<stdio.h>
int main()
{
	int num,i,sum=0;
	printf("Enter the number");
	scanf("%d",&num);
	for(i=1;i<num;i++)
	{
		if(num%i==0){
			sum=sum+i;
		printf("\n divisor %d",i);
	}}
	if(sum==num)
		printf("perfect num");
	else
		printf("not a perfect num");
}
