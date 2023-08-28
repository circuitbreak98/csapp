#include <stdio.h>

int main(void){
int a = 35;
int b = 102;

int* pa = &a;
int* pb = &b;

printf("%d, %d\n", a , b);

*pb = *pa^*pb;
*pa = *pa^*pb;
*pb = *pa^*pb;

printf("%d, %d\n", a, b);
return 0;
}
