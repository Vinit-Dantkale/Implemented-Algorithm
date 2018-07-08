#include<stdio.h>
#define SIZE 100
int arr[SIZE]={};
int main(){

int i,j,temp;

for(i=1;i<SIZE;i++){
    temp=arr[i];
    for(j=i-1;j>=0&&temp<arr[j];j--){
        arr[j+1]=arr[j];
    }
    arr[j+1]=temp;
}

for(i=0;i<SIZE;i++){
    printf("%d ",arr[i]);
}
return 0;
}
