#include<stdio.h>
int main()
{
	int a[7],n,i;
	printf("enter the number");
	scanf("%d",&n);
	printf("enter array element: \n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
printf("even number");
for(i=0;i<n;i++)
{
	if(a[i]%2==0)
		printf("%d",a[i]);
}
printf("\nodd numbers:");
for(i=0;i<n;i++)
{
	if(a[i]%2!=0)
		printf("%d",a[i]);
}
}
