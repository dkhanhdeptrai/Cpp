#include <stdio.h>
int main(){
	int a, b, sum = 0;
	scanf("%d%d", &a, &b);
	
if(a>b){
	int c = a;
	a = b;
	b = c;
} 
for(int i = a; i <= b; i++){
		sum += i;
}
printf("%d", sum);
return 0;
} 
