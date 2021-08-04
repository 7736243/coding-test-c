#include <stdio.h>

int main(){
    int a, sum=0;
    char c[105]={};
    
    scanf("%d", &a);
    scanf("%s", c);
    
    for(int i=0;i<a;i++){
      sum += c[i]-48;
    }
    
    printf("%d", sum);
}