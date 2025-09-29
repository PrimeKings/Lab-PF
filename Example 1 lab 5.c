#include<stdio.h>

int main(){
	int x,y,z;
	printf("Enter value of X: ");
	scanf("%d", &x);
	printf("Enter value of Y: ");
	scanf("%d", &y);
	printf("Enter value of Z: ");
	scanf("%d", &z);
	if(x>y){
		if(x>z){
			printf("Largest value isn X = %d", x);
		}
		else{
			printf("Largest value of z = %d", z);
		}
	}
	else{
		if(y>z){
			printf("The largest value of y = %d", y);
		}
		else{
			printf("Largest value is z = %d", z);
		}
	}
	return 0;
}
