#include <stdio.h>
int main(){
    int a, b;
    float x;
    scanf("%d %d", &a, &b);
    if(a!=0){
        x = (float)-b / a;
        printf("%.2f", x);
    }else if(b!=0){
        printf("Vo nghiem");
    }else{
        printf("Vo so nghiem");
    }
}