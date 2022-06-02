#include<stdio.h>
#define n 6
void selectionsort(int arr[]);
int findmax(int arr[] , int end);
void swap(int arr[] , int max , int end);

int main(){
    
    int arr[] = {6,5,7,3,2,8};
    
    selectionsort(arr);
    
}


void selectionsort(int arr[]){
    
    int end = n-1;
    for(int j = 0;j<n-1;j++){
    int max = findmax(arr,end);
    swap(arr , max , end);
    end--;
    }
    
    for(int k =0; k<n;k++){
        printf("%d  ",arr[k]);
        
    }
    printf("\n");
    
}

int findmax(int arr[] , int end){
    
    int max = 0;
    for(int i=0;i<end+1;i++){
        if(arr[i]>arr[max]){
            max = i;
        }
    }
    return max;
    
}
void swap(int arr[] , int max , int end){
    
    int temp = arr[max];
    arr[max]=arr[end];
    arr[end]=temp;
    
}
