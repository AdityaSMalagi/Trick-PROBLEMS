#include<stdio.h>
#include<math.h>
#define PI 3.14
#define MAX 180

int main(){
    int angle = 0;
    float x,y;
    printf("angle cos(angle)\n\n");
     while(angle <= MAX)
     {
        x = (PI/MAX)*angle;
        y = cos(x);
        printf("%.2d %8.2f\n",angle,y);
        angle += 30;
     }
     return 0;
}