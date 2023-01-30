#include <stdio.h>

int main() {
    int a, b, product;
#if 0
    a = 20;
    b = 7;
#else
    printf("A=>");
    scanf("%d", &a);
    printf("B=>");
    scanf("%d", &b);
#endif
    // Calculating product
    product = a > 10 && b < 8 ;
    printf("a > 10 && b < 8 ==> %d\n", product);
    product = a > 10 || b < 8 ;
    printf("a > 10 || b < 8 ==> %d\n", product);
    product = !(a > 10 && b < 8) ;
    printf("not (a > 10 && b < 8) ==> %d\n", product);
    
    return 0;
}
