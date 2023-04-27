#include<stdio.h>
int main()
{
	int i,n,small;
	printf("Enter the number");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	small=a[0];
	for(i=0;i<n;i++)
{
	if(a[i]<small)
		small=a[i];
}
		printf("smallest num %d",small);
}
