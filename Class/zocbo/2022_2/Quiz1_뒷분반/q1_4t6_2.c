#include <stdio.h>
int main(){
	int a, b, brk;
	int sum =0;
	printf("View the menu and place your order\n");
	printf("1. Americano:1800 Won\n");
	printf("2. Caffe Latte:2800 Won\n");
	printf("3. Caffe Mocha:3800 Won\n");
	printf("4. Caffe Americano:4300 Won\n");
	printf("5. Strawberry::3800 Won\n");
	printf("6. Order again(Reset)\n");
	printf("7. Order finished\n");
	
	while(1){
		if(brk==1) break;
		printf("\nPlease select a menu: ");
		scanf("%d", &a);

			switch(a){
				case 1:
					printf("How many cups of Americano do you want? ");
					scanf("%d", &b);
					sum+=b*1800;
					break;
				
				case 2:
					printf("How many cups of Caffe Latte do you want? ");
					scanf("%d", &b);
					sum+=b*2800;
					break;
					
				case 3:
					printf("How many cups of Caffe Mocha do you want? ");
					scanf("%d", &b);
					sum+=b*3800;
					break;
					
				case 4:
					printf("How many cups of Caffe Americano do you want? ");
					scanf("%d", &b);
					sum+=b*4300;
					break;
					
				case 5:
					printf("How many cups of Strawberry do you want? ");
					scanf("%d", &b);
					sum+=b*3800;
					break;
					
				case 6:
					sum=0;
					continue;
					
				case 7:
					brk=1;
					break;	
			}
		}
		printf("\nTotal Cost : %d", sum);
	}
	