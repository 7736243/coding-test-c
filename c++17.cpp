#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int a;
    char arr[85];
    
    scanf("%d", &a);
    
    for(int i=0;i<a;i++){
        scanf("%s", arr);
        int sum=0, cnt=0;
        
        for(int i=0;i<strlen(arr);i++){
            if(arr[i]=='O'){
                cnt++;
                sum+=cnt;
            }
            else if(arr[i]=='X'){
                cnt=0;
            }
        }
        printf("%d\n", sum);
    }
}