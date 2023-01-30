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
    product = a > b;
    printf("a>b ==> %d\n", product);
    product = a < b;
    printf("a<b ==> %d\n", product);
    product = a == b;
    printf("a==b ==> %d\n", product);
    
    return 0;
}
