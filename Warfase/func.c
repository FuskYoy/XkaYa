#include <stdio.h>
#include <stdlib.h>
#include "func.h"


void fill_mass(int array[], const int v){
for (int i=0;i<v;++i){ 
   array[i]=0+rand()%(v-0+1);   
}
}

void boss(char array[], const int v){
for (int j=0;j<v;++j){
    if (array[j]>=32 && array[j]<=90)
        {
        array[j]=array[j]+32;
        }
    else
        {
        array[j]=array[j]-32;
        }
    }
}

void print_mass(int array[], const int v){ 
for (int k=0;k<v;++k){
printf ("%d ", array[k]);
}
}

void miniboss(char array[], const int v){
    int cd = 0;
    for(int y=0; y<v;++y){
        for(int n=0;n<v;++n){
            if (array[y]<array[n]){ 
                cd = cd+1;}
            if (cd == v-1){
            printf("%c, %d\n",array[y], array[y]);}
    cd=0;
    }
}
}
void manaboss(char array[], const int v){
int cd = 0;
    for(int y=0; y<v;++y){
        for(int n=0;n<v;++n){
            if (array[y]>array[n]){ 
            cd=cd+1;}
            if (cd == v-1){
             printf("%c, %d\n",array[y], array[y]);
             }
        }
    cd=0;
}
}
void summ_hit(int array[], int array_hit[], int array_makima[], const int v){
    for(int n=0;n<v;++n){
        array_makima[n]=array_hit[n]+array[n];
    }
}

void no_null(int array[], int array_hit[], const int v){
    int q=0;
    for(int poo=0;poo<v;++poo){
        if (array[poo] != 0){
          array_hit[q]=array[poo];
            ++q;
        }
    }
}