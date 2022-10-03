#include<stdio.h>

void main(){
    int a[10];
    
    int n=sizeof(a)/sizeof(a[0]);

    for(int i =0;i<n;i++)
    {

        a[i]=i;

    }


    for(int i =0;i<n;i++)
    {
        
    printf("%d ",a[i]);

    }

}