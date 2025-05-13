#include <stdio.h>
int main(){
	int n, a=1;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	for(int i=1; i<=n; i++){
		a*=i;
	}
	printf("Result-> %d! = %d", n, a);
}