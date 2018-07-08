#include<stdio.h>
#include<conio.h>
#include<time.h>
#define SIZE 100
void main()
{
int arr[SIZE]={17, 93, 69, 7, 85, 41, 73, 18, 43, 15, 16, 99, 51, 55, 89, 3, 54, 96, 11, 63, 82, 38, 72, 88, 53, 13, 75, 9, 92, 30, 29, 67, 44, 47, 28, 50, 4, 87, 58, 74, 52, 81, 24, 60, 57, 36, 26, 46, 77, 20, 61, 37, 76, 34, 71, 64, 14, 62, 97, 90, 95, 12, 49, 27, 10, 84, 25, 86, 83, 100, 32, 6, 91, 40, 21, 66, 56, 94, 31, 1, 68, 33, 78, 5, 98, 65, 39, 59, 80, 79, 22, 2, 8, 70, 42, 48, 23, 19, 45, 35};
int i,n,key;
printf("\nEnter number to search:");
scanf("%d",&key);
i=0;
while(i<SIZE&&arr[i]!=key)
{
i++;
}
if(i<SIZE)
{
printf("Element found at:arr[%d]\n",i+1);
}
else
{
printf("Element no found\n");
}
}
