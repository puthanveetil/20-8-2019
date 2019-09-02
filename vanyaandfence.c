#include<stdio.h>
int main()
{
int n,h,t,r=0;
scanf("%d%d",&n,&h);
for(int i=0;i<n;i++)
{
scanf("%d",&t);
if(t>h)
r++;
r++;
}
printf("%d",r);
}