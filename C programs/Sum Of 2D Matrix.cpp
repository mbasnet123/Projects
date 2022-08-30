#include <stdio.h>
int main(){
	int a[2][3],i,j,sum=0;
	printf("enter matrix elements:\n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Displaying matrix elemets:\n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%d ",a[i][j]);
			sum+=a[i][j];
		}
		printf("\n");
	}
	printf("sum=%d",sum);
}
