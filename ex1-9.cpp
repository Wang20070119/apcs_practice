#include <stdio.h>

int main() {
    int a, b, product;
    a = 23;
    b = 7;

 
    // Calculating product
    product = a > b;
    printf("a>b ==> %d\n", product);
    product = a < b;
    printf("a<b ==> %d\n", product);
    product = a == b;
    printf("a==b ==> %d\n", product);
    
    return 0;
}
