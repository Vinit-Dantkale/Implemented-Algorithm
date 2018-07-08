#include<stdio.h>
#include<conio.h>
#define SIZE 100
void main()
{
int arr[SIZE]={29, 42, 43, 48, 55, 57, 61, 91, 128, 129, 132, 135, 136, 138, 141, 167, 175, 181, 205, 221, 238, 241, 263, 270, 276, 283, 302, 315, 320, 324, 326, 328, 331, 343, 349, 350, 353, 365, 368, 370, 388, 389, 405, 406, 409, 452, 455, 456, 503, 519, 524, 533, 537, 546, 560, 564, 583, 585, 586, 592, 594, 595, 619, 623, 625, 634, 637, 640, 649, 660, 671, 678, 685, 707, 710, 720, 723, 731, 734, 748, 755, 786, 787, 792, 794, 801, 811, 859, 865, 870, 897, 904, 907, 910, 911, 934, 943, 955, 991, 997};
int s,e,mid,key;
printf("Enter Number to Find:");
scanf("%d",&key);
s=0;
e=SIZE-1;
while(s<=e)
{
mid=(s+e)/2;
if(arr[mid]==key)
{
printf("Found at Location: %d\n",mid+1);
break;
}
else if(arr[mid]<key)
{
s=mid+1;
}
else if(arr[mid]>key)
{
e=mid-1;
}
else{}
}
if(s>e)
{
printf("Element Not Found\n");
}
}
