#include <stdio.h>
#include <stdlib.h>
int main(){
	FILE *fp;
	int a=50;
	char str[50]="anish";
	fp=fopen("fgh.txt","w");
	fprintf(fp,"%d %s",a,str);
	fclose(fp);
}
