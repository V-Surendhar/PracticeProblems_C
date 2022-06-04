#include<stdio.h>
void insertionsort(int arr[] , int n);
void swap(int arr[] , int first , int second);
int main(){
    int arr[] = {5,3,4,1,2};
    int n =5;
    insertionsort(arr,n);
    
}

void insertionsort(int arr[] ,int n){
    
    for(int i =0;i<=n-2;i++){
        
        int j=i+1;
        while(j>0){
            if(arr[j] < arr[j-1]){
                swap(arr , j , j-1 );
                j--;
                }
            else{
                break;
            }
        }
    }
    
    for(int k =0;k<n;k++){
        printf("%d      " ,arr[k]);
        
    }
    printf("\n");
    
}



void swap(int arr[] , int first , int second){
    int temp = arr[first];
    arr[first]= arr[second];
    arr[second] = temp;
}



