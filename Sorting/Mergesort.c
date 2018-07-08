#include <stdio.h>
#define SIZE 10000
int arr[SIZE]={};
int temp[SIZE];
int n=SIZE;
void merge(int arr[],int start,int mid,int end){
int i=start;
int j=mid+1;
int k=start;
while(i<=mid&&j<=end){
if(arr[i]<=arr[j]){
temp[k]=arr[i];
i++;k++;
}
else if(arr[j]<=arr[i]){
temp[k]=arr[j];
j++;k++;
}
else{}
}
while(i>mid&&j<=end){
temp[k]=arr[j];
j++;k++;
}
while(j>end&&i<=mid){
temp[k]=arr[i];
i++;k++;
}
for(k=start;k<=end;k++){
arr[k]=temp[k];
}
}

void mergesort(int arr[],int start,int end){

if(start<end)
{
int mid=(start+end)/2;
mergesort(arr,start,mid);
mergesort(arr,mid+1,end);
merge(arr,start,mid,end);
}
}
int main(void) {
int i;
mergesort(arr,0,n-1);
for(i=0;i<SIZE;i++){
printf("%d ",temp[i]);
}
return 0;
}
