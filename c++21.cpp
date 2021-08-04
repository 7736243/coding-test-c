#include <stdio.h>

int main(){
    int n, x, b;
    scanf("%d %d", &n, &x);
    
    for(int i=0;i<n;i++){
        scanf("%d", &b);
        if(b<x)    printf("%d ", b);
    }
}