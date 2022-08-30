#include <stdio.h>
int main(){
	int i,p,n;
	printf("Enter any number: ");
	scanf("%d",&n);
	for(i=1;i<=10;i++){
		p=n*i;
		printf("%d * %d = %d\n",n,i,p);
	}
}
