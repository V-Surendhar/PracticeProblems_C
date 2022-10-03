/*



1
1 1
1 2 1
1 3 3 1
1 4 6 4 1


*/


#include <stdio.h>
void main(){


    int n=5;
    
for(int i=1;i<=n;i++){
    int c=1;
    for(int j=1;j<=i;j++){

    printf("%d ",c);
    c=c*(i-j)/j;

    }
    printf("\n");
}

}