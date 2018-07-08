#include<stdio.h>
#define SIZE 1000
void main()
{
int flag,i,j,n,temp,step;
int a[SIZE]={};
n=SIZE;
for(step=SIZE/2;step>0;step=step/2)
{
for(i=step;i<n;i++)
{
temp=a[i];
flag=0;
for(j=i;j>=step&&a[j-step]>temp;j=j-step)
{
a[j]=a[j-step];
flag=1;
}
if(flag==1)
{
a[j]=temp;
}
}
}
for(i=0;i<SIZE;i++)
{
printf("%d ",a[i]);
}
}

