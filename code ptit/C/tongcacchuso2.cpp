#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--)
    {
    int n, sum=0;
    scanf("%d", &n);
    while(n>0){
        sum += n % 10;
        n /= 10;
    }
    printf("%d\n", sum);
}
} 
