#include <stdio.h>
#include <stdlib.h>
#include "func.h"


void fill_mass(char array[], const int v){
for (int i=0;i<v;++i){
    scanf ("%c", &array[i]);   
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

void print_mass(char array[], const int v){ 
for (int k=0;k<v;++k){
printf ("%c\n", array[k]);
}
}

void miniboss(char array[], const int v){
    int cd = 0;
    for(int y=0; y<v;++y){
        for(int n=0;n<v;++n){
            if (array[y]<array[n]) 
                cd = cd+1;}
            if (cd == v-1){
            printf("%c, %d\n",array[y], array[y]);}
    cd=0;
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
//Почему то через ?: не работает, говорит что в этом выражении будет всегда "Правда"