#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *fp=NULL;
	char ch;
	char str[50];
	fp=fopen("abc.txt","r");
	if(fp==NULL){
		printf("Can't open file");
		exit(1);
	}
	pos=ftell(fp);
	printf("%d",pos);
	fseek(fp,5,SEEK_SET);
	printf("%d",ftell(fp));
	fclose(fp);
}
