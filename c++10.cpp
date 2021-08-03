#include <stdio.h>

int main(){
    int max=0, index=0;
    int a=0;
    
    for(int i=1;i<=9;i++){
        scanf("%d", &a);
        
        if(a>max){
            max = a;
            index=i;
        }
    }
    
    printf("%d\n%d", max, index);
}