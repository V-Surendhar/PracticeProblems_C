#include<stdio.h>
int main(){

int arr[5] = { 8,6,7,2,0};

//bubble sort

// sizeof arr / sizeof(int) -> will return the size of the array;


for(int i =0 ; i < sizeof arr / sizeof(int) ; i++){
for(int j =0 ; j< sizeof arr  /sizeof(int) -i ; j++){

if( arr[j] > arr[j+1] ){

	arr[j] = arr[j] ^ arr[j+1] ;
	arr[j+1] = arr[j] ^ arr[j+1] ;
	arr[j] = arr[j] ^ arr[j+1] ;

}
}
}

for(int k=0;k < sizeof arr / sizeof(int) ; k++){
printf("%d   " , arr[k]);

}
printf("\n");
}


