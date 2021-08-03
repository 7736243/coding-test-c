#include <stdio.h>

int main(){
    int arr[10]={0};
    
    for(int i=1;i<=8;i++){
        scanf("%d ", &arr[i]);
    }
    
    int cnt=0;
    if(arr[1]==1){
        for(int i=1;i<=8;i++){
            if(arr[i]==i)    cnt++;
            if(cnt==8){
                printf("ascending");
                return 0;
            }
        }
    }
    else if(arr[1]==8){
        int n = 8;
        cnt=0;
        for(int i=1;i<=8;i++){
            if(arr[i]==n)    cnt++;
            n--;
            if(cnt==8){
                printf("descending");
                return 0;
            }
        }
    }
    printf("mixed");
    return 0;
}