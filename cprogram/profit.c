#include<stdio.h>
int main()
{
int cp,sp;
printf("Enter the cost prise and selling price");
scanf("%d%d",&sp,&cp);
if(sp>cp)
{
printf("profit%d",sp-cp);
}
else if(cp>sp)
{
printf("loss%d",cp-sp);
}
else
{
printf("no profit no loss");
}
}

