#include <stdio.h> 

/*int main(){
    int i, a[10];
    for ( i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for ( i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    
}*/

int main(){
    int i, a[10], qtd=0;
    for ( i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    } 
    for ( i = 0; i < 10; i++){
        if(a[i]==0){
            qtd++;
        }
    }
    printf("Tem %d zeros", qtd);
    printf(" e estão na posição: ");
    for ( i = 0; i < 10; i++){
        if(a[i]==0){
           printf("a[%d] ", i); 

        }
    }
    
}