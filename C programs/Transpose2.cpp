#include <stdio.h>
int main(){
	int a[2][3],i,j,arrT[3][2];
	printf("Enter matrix elements:\n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Displaying matrix elements:\n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%d ",a[i][j]);
			
		}
		printf("\n");
		arrT[3][2]=a[j][i];
		
	}
//	for(i=0;i<3;i++){
//		for(j=0;j<2;j++){
//			scanf("%d",&a[i][j]);
//		}
//	}
	printf("Displaying matrix elements:\n");
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			printf("%d ",a[j][i]);
		}
//	printf("Displaying transposed matrix:\n");
//	printf("%d",arrT[3][2]);
	return(0);
}
}
