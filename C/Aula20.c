/*
arrays são areas de memória contínua:
[8] = a[4] = *(a+4)
[6] = a[3] = *(a+3)
[4] = a[2] = *(a+2)
[2] = a[1] = *(a+1)
[0] = a[0] = *a(a+0)
*/


#include <stdio.h>

int main(){
    int i, a[5], *p;
    for(i = 0; i < 5; i++)
        a[i] = i*2;
    //Com ponteiros
    for(i=0; i<5; i++)
        printf("%d ", *(a+i));
    printf("\n");
    for(i=0; i<5; i++)
        printf("%d ", a[i]);
    
    return 0;


}