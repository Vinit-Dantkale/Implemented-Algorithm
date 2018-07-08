#include <stdio.h>
#define SIZE 1000
void main()
{
int i,j,n,temp;
int a[SIZE]={};
n=SIZE;
for(i=1;i<n;i++)
{
for(j=0;j<n-i;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;

}
}
}
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
}
