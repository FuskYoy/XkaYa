#include <stdio.h>

int main(){
    int a=365;
    int c=0;
    int f=100;
    int m=0;
    for (int b=0; b<3;b++){ 
        c=a/f;
        a=a%f;
        f=f/10;
       printf("%d\n",c);
       m=m+c;
    }
    printf ("%d",m);

}