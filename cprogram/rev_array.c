#include<stdio.h>
int main()
{
	int i,a[5],sum=0;
	float avg;
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	for(i=4;i>=0;i--)
		printf("%d \t",a[i]);
}
