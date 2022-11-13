#include <stdio.h>

int main(){
int v=6;
char array[v];

for (int i=0;i<v;++i){
    scanf ("%c", &array[i]);
    
}
for (int j=0;j<v;++j){
    if (array[j]>=32 && array[j]<=90)
        {
        array[j]=array[j]+32;
        printf ("%c\n", array[j]);
        }
    else
        {
        array[j]=array[j]-32;
        printf ("%c\n", array[j]); 
        }
    }
}