#include<stdio.h>
#define SIZE 100
int arr[SIZE]={};
int main(){
int i,j,index,temp;
for(i=0;i<SIZE-1;i++){
    index=i;
    for(j=i+1;j<SIZE;j++){
        if(arr[index]>arr[j]){
            index=j;
        }
    }
    temp=arr[i];
    arr[i]=arr[index];
    arr[index]=temp;
}

for(i=0;i<SIZE;i++){
    printf("%d ",arr[i]);
}
return 0;
}
