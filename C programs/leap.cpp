#include <stdio.h>
int main(){
	int days;
	printf("Enter days: ");
	scanf("%d",&days);
	if(days%365==0){
		printf("Not Leap");
	}
	else{
		printf("Leap");
		}
	return(0);
}
