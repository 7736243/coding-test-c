#include <stdio.h>

int main(){
    int s[15];
    int cnt=0;
    int check[1005]={0};
    
    for(int i=0;i<10;i++){
        scanf("%d", &s[i]);
        s[i]%=42;
    }
    
    for(int i=0;i<10;i++){
        if(check[s[i]]==0){
            cnt++;
            check[s[i]]=1;
        }
    }
    
    printf("%d", cnt);
    return 0;
}