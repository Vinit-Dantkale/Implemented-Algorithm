#include<stdio.h>
#define SIZE 6
int n=SIZE,cost[20],choice;
int visited[20];
int graph[SIZE][SIZE]={
{0,3,1,6,0,0},
{3,0,5,0,3,0},
{1,5,0,5,6,4},
{6,0,5,0,0,2},
{0,3,6,0,0,6},
{0,0,4,2,6,0},
    };
void clear(int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        visited[i]=0;
        cost[i]=9999;
    }
    cost[0]=0;
}

int getMin()
{
    int i,index;
    int temp=9999;
    for(i=0;i<n;i++)
    {
        if(cost[i]<temp&&visited[i]==0)
        {
            temp=cost[i];
            index=i;
        }
    }
    return index;
}

void PrimsAlgo()
{
    int count,i,min;

    count=0;
    while(count<n)
    {
        min=getMin();

        visited[min]=1;

        for(i=0;i<n;i++)
        {
            if(cost[i]>graph[min][i]&&graph[min][i]!=0&&visited[i]==0)
            {
                cost[i]=graph[min][i];
            }
        }
        count++;
    }

}

void main()
{
    int i,j,sum=0;
    clear(n);

    PrimsAlgo();

    printf("Node\tCost\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t%d\n",i,cost[i]);
        sum=sum+cost[i];
    }

    printf("Minimum Cost= %d\n",sum);

}
/*
Output:
Node    Cost
0       0
1       3
2       1
3       2
4       3
5       4
Minimum Cost= 13*/
