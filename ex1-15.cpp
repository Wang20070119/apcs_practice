#include <iostream>
using namespace std;
#include <stdio.h>
int main(){
    int a[5],i,n,max = -10000;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i] > max){
            max = a[i];
        }    
    }
    printf("the max of a[] = %d",max);
    
    return 0;
}
