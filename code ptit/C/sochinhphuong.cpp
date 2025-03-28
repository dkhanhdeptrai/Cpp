#include <stdio.h>
#include <math.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        long long n;
        scanf("%lld", &n);
        int x = sqrt(n);
        if(x*x == n){
            printf("YES\n");   
        }else{
            printf("NO\n");
        }
    }
}