#include <stdio.h>
int main(){
	int i,a[5],even=0,odd=0;
	printf("Enter array elements: ");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++){
		printf("%d ",a[i]);
		if(a[i]%2==0)
		even++;
		else
		odd++;
	}
	printf("\n");
	printf("even= %d\n",even);
	printf("odd= %d",odd);
} 
