#include <stdio.h>
int main(){
	int a, b, min, x;
	scanf("%d%d", &a, &b);
	if(a < b){
		min = a;
		}
	else 
		{
	min = b; 
	} 

for(int i = min; i>=1; i--){
	if(a % i == 0 && b % i == 0){
	 x = i;
	 break; 
}
}
printf("%d", x);
return 0; 
}
