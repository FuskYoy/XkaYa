#include <stdio.h>
#include "func.h"





int main(){
int v=0;
scanf ("%d", &v);
int array[v];
int array_hit[v];
int array_makima[v];


fill_mass(array, v);
fill_mass(array_hit, v);
//boss(array, v);
//miniboss (array, v);
//manaboss (array, v);
summ_hit(array, array_hit, array_makima, v);
print_mass(array, v);
puts("\n");
print_mass(array_hit, v);
puts("\n");
print_mass(array_makima, v);
puts("\n");
}
