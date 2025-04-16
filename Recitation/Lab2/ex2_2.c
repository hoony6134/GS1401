#include <stdio.h>
int main(void)
{
    int H, W, N;
	printf("Enter H, W and N : ");
	scanf("%d %d %d", &H, &W, &N);
	int floor, code;
	floor = (N - 1) % H + 1;
	code = (N - 1) / H + 1;
	if (code >= 10)
		printf("N : %d --------> Student's room number : %d%d\n", N, floor, code);
	else
		printf("N : %d --------> Student's room number : %d0%d\n", N, floor, code);	
}