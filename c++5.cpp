#include <stdio.h>

int main(){
    int n;
    double max_score=-1, avg=0;
    double score[1005]={0};
    
    scanf("%d", &n);
    
    for(int i=0;i<n;i++){
        scanf("%lf", &score[i]);
        if(score[i]>max_score)    max_score = score[i];
    }
    
    for(int i=0;i<n;i++){
        score[i] = (score[i]/max_score)*100.0;
        avg+=score[i];
    }
    
    printf("%.2lf", avg/(double)n);
}