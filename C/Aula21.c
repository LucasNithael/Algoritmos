#include <stdio.h>
#include <stdlib.h> // Funções de gerenciamento de memória

int x;
int y=15;

int main(int arfc, char *argv[]){
    
    int *values;
    int i;
    values = (int*)malloc(sizeof(int)*5);

    for( i=0 ; i<5 ; i++)
        values[i] = i;
    
    free(values);
    return 0;
}
