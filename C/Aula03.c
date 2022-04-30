#include <stdio.h>

void main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int s = soma(a, b);
    printf("%d\n", s);

}

int soma(int a, int b){
    int s = a + b;
    return s;
}