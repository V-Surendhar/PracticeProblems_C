#include<stdio.h>
#include<stdlib.h>


void main(){


    int n=100;

    int *A=(int*)malloc(sizeof(int)*n);
    A[0]=0;
    A[1]=1;
    A[2]=2;
    A[3]=3;
    A[4]=4;
    



for(int i=0;i<n;i++){ 

    printf("%d  ",A[i]);

}




}