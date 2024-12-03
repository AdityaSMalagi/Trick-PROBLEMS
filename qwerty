#include<stdio.h>
float calculateAverage(int* scores, int length, int N){
    int sum = 0;
    for (int i = length - N ; i < length; i++){
        sum += scores[i];
    }
    return (float)sum / N;
}

int main(){
    int scores[100], n = 0, N;
    char c;

    //Reading scores
    do{
        scanf("%d%c", &scores[n++], &c);
    }
    while(c != '\n');

    //reading
    scanf("%d",&N);
    printf("Average score for the last %d test is : %.2f\n", N , calculateAverage(scores,n, N));
    return 0;
}