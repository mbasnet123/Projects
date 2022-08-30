#include <stdio.h>
int main(){
	int n,rem,b=0,base=1;
	printf("Enter decimal no.: ");
	scanf("%d",&n);
	while(n>0){
		rem=n%2;
		b=b+rem*base;
		n=n/2;
		base=base*10;
		
	}
	printf("Binary No. %d",b);
	return(0);
}
