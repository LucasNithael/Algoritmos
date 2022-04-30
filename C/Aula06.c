#include <stdio.h>

/*void main(){
    int a=1, b=2, c=5, d=8, e=10, w, p; 
    w = a+c*b&e-a|d/2;
    printf("%d\n", w);
}


int main(){
    unsigned char r, g, b, alfa;
    unsigned int rgb;
    scanf("%hhu %hhu %hhu %hhu",&r, &g, &b, &alfa);
    rgb = alfa;
    rgb += b<<8;
    rgb += g<<16;
    rgb += r<<24;
    printf("RGB = %u\n", rgb);
    printf("RGB = %08X \n", rgb);
    return 0;
}*/

int main(){
  unsigned char r, g, b, alfa;
  unsigned int rgb;
  scanf("%u", &rgb);
  r = rgb>>24;
  g = rgb>>16;
  b = rgb>>8;
  alfa = rgb;
  printf("RGB = %u\n",rgb);
  printf("R = %hhu\n", r);
  printf("G = %hhu\n", g);
  printf("B = %hhu\n", b);
  printf("ALFA = %hhu\n", alfa);

  return 0;
}

/*Os primeiros 8 bits que irão ocupar o valor unsigned char*/