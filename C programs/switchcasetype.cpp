#include <stdio.h>
int main(){
	int type;
	printf("Enter num: ");
	scanf("%d",&type);
	switch(type){
		case 11:
			printf("Circle");
			break;
		case 22:
			printf("Rectangle");
			break;
		case 33:
			printf("Square");
			break;
		case 44:
			printf("Triangle");
			break;
	}
	return(0);
}
