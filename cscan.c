#include<stdio.h>
#include<stdlib.h>
int main(){
    int RQ[100],i,j,n,TotalHeadMoment=0,initial,size,move;
    printf("Enter the number of requestes: \n");
    scanf("%d",&n);
    printf("Enter request Sequence\n");
    for(i=0;i<n;i++)
    scanf("%d",&RQ[i]);
    printf("Enter intial head position\n");
    scanf("%d",&initial);
    printf("Enter total disk size\n");
    scanf("%d",&size);
    printf("Enter the head movement direction for high 1 and low 0\n");
    scanf("%d",&move); 
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++)
        {
            if(RQ[j]>RQ[j=1)