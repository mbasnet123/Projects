#include <stdio.h>
int main(){
	int a,b,c,d,e;
	double percent = 0;
	printf("Enter 5 nums: ");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	double total=a+b+c+d+e;
	percent= total/500*100;
	printf("%lf\n",total);
	printf("%lf\n",percent);
	if(percent>80){
		printf("A+");
	}
	if(percent>=65&&percent<=80){
		printf("A");
	}
	if(percent>=50&&percent<=65){
		printf("B");
	}
	if(percent>=42&&percent<=50){
		printf("C");
	}
	if(percent<42){
		printf("fail");
	}
	return(0);
}
