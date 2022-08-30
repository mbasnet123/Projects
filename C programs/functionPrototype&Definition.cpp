#include <stdio.h>
int max(int a,int b);
int main(){
	max(23,7);
}
int max(int a,int b){
	if(a>b){
		printf("%d is greater",a);
	}
	else{
		printf("%d is greater",b);
	}
}
