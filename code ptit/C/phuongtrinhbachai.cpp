#include <stdio.h>
#include <math.h>
int main(){
    int a, b, c;
    float x1, x2, delta;
    scanf("%d %d %d", &a, &b, &c);
    if(a==0){
        x1 = (float)-c / b;
        printf("%.2f", x1);
    }
    delta = b*b - 4*a*c;
    if(delta < 0){
        printf("NO");
    }else if(delta == 0){
        x1 = (float)-b / (2*a);
        printf("%.2f", x1);
    }else{
        x1 = (float)(-b + sqrt(delta)) / (2*a);
        x2 = (float)(-b - sqrt(delta)) / (2*a);
        printf("%.2f %.2f", x1, x2);
    }
    return 0;
}