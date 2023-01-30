#include <stdio.h>
int main(){
    
#if 0
    int a[2];
    printf("A=> ");
    scanf("%d", &a[0]);
    printf("A=> ");
    scanf("%d", &a[0]);
    printf("A[0]+A[1]=%d\n", a[0]+a[1]);
#else
     int a, b;
     printf("A=> ");
     scanf("%d", &a);
     printf("B=> ");
     scanf("%d", &b);
     printf("A+B=%d\n", a+b);
#endif
     return 0;
}
