#include <stdio.h>

/*int main(){
    int a[10], indice, valor;
    printf("Informe o indice que deixar atribuir\n");
    scanf("%d", &indice);
    printf("Informe o valor da atribuição\n");
    scanf("%d", &valor);
    a[indice]=valor;
    printf("a[%d] = %d\n", indice, a[indice]);
    return 0;
}*/

int main(){
    int i, a[10];
    for( i=0; i<10; i++){
        a[i]=i*2;
        printf("%d ", a[i]);
    }
}