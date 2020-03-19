#include <stdio.h>

int main(){
    int a = 5, b = 6, i;
    i = ++a * ++b;
    printf("i = %d\na = %d\nb = %d\n", i, a, b);
    return 0;
}