#include <stdio.h>
#include <stdlib.h>
int main(){
	FILE *fp;
	char str[50]="Manish";
	fp=fopen("asd.txt","w");
	fputs(str,fp);
	fclose(fp);
}
