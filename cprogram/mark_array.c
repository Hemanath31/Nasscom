#include<stdio.h>
int main ()
{
	int i,mark[5],sum=0;
	float avg;
	for(i=0;i<5;i++)
		scanf("%d",&mark[i]);
	for(i=0;i<5;i++)
		sum=sum+mark[i];
	avg=sum/5.0;
	printf("\n total marks %d",sum);
	printf("\n average %4.2f",avg);}
