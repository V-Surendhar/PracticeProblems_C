#include<stdio.h>
void cyclicsort(int arr[] , int n);
void swap(int arr[] , int first , int second);

int main(){
    
   int  n=5;
int arr[] = { 5,3,2,1,4};
cyclicsort(arr,n);
}

void cyclicsort(int arr[] , int n){
    int i =0;
    while(i<n){
        int correct = arr[i]-1;
        if(arr[i] != arr[correct]){
            swap(arr,i,correct);
            }
            
        else{
            i++;
        }
        
    }

    for(int j =0;j<n;j++){
        printf("%d  ",arr[j]);
    }
    printf("\n");
    
}


void swap(int arr[] , int first , int second){
    int temp = arr[first];
    arr[first]= arr[second];
    arr[second]=temp;
}


