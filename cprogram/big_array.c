#include<stdio.h>
int main()
{
	int i,n,big=0;
	printf("Enter the number");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
{
	if(a[i]>big)
		big=a[i];
}
		printf("biggest num %d",big);
}
