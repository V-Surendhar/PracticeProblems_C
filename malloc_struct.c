#include<stdio.h>
#include<stdlib.h>


struct Rectangle
{
    int length;
    int breath;


};


int main(){


struct Rectangle *ptr=(struct Rectangle*)malloc(sizeof(struct Rectangle));


(*ptr).length=20;
(*ptr).breath=10;

printf("%d %d",(*ptr).length,(*ptr).breath);

return 0;
}