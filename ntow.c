#include<stdio.h>
#include<string.h>
char *unit[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
char *twodig[]={"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","ninteen"};
char *tens[]={"","","twenty ","thirty ","fourty ","fifty ","sixty ","seventy ","eighty ","ninty "};

void doudig(int n);
void tridig(int m);
int main()
{
int a,i;
printf("enter a number");
scanf("%d",&a);
if(a>=0 && a<10)
printf("%s",unit[a]);
else if(a>=10 && a<99)
{
doudig(a);
}
else if(a>99)
{
tridig(a);
}
else if(a>99)
{
if((a/10000000)%100!=0)
{
doudig((a/10000000)%100);
printf(" crores ");
}
if((a/100000)%100!=0)
{
doudig((a/100000)%100);
printf(" lakh ");
}
if((a/1000)%100!=0)
{
doudig((a/1000)%100);
printf(" thousand ");
}
tridig(a%1000);
}
}
void doudig(int n)
{
if(n/10==1)
printf("%s",twodig[n%10]);
else if(n/10!=1)
{
if(n%10!=0)
printf("%s%s",tens[n/10],unit[n%10]);
else
printf("%s",tens[n/10]);
}
return;
}
void tridig(int m)
{
if(m/100!=0)
printf("%s hunderd ",unit[m/100]);
if(m%100>0)
{
printf(" and ");
doudig(m%100);
return;
}
}
