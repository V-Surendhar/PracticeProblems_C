#include<stdio.h>
void main(){

int n=10;  //data variable
int *p=&n;     // address variable

printf("%d",*p); //10
printf("\n");
printf("%x",*p); //a   x-hexa decimal
printf("\n");
printf("%p",p);  //0x7ffeacbdb2fc
printf("\n");



// pointers in One dimensional Array

int a[10];
int length=sizeof(a)/sizeof(a[0]);
for(int i=0;i<length;i++){

a[i]=i;

}


int *q=a;

for(int i=0;i<length;i++){

printf("%d \t",*q);
q++;

}


printf("\n");


}