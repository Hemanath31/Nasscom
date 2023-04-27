#include<stdio.h>
int main()
{
	int num,temp,digit,fact,sum=0,i,j;
         for(j=1;j<=10;j++)
	 {
		 sum=0;
		 num=j;
		 temp=j;
	 while(num>0)
	 {
		 digit=num%10;
		 num=num/10;
		 fact=1;
		 for(i=1;i<=digit;i++)
		 fact=fact*i;
		 sum=sum+fact;
	 }
	 if(sum==temp)
		 printf("%d",temp);
        }}
