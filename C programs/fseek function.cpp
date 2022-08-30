#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *fp=NULL;
	char ch;
	char str[50];
	fp=fopen("abc.txt","r");
	if(fp==NULL){
		printf("Can't open file'");
		exit(1);
	}
	fseek(fp,7,SEEK_SET);
	ch=fgetc(fp);
	printf("%c",ch);
//	fseek("%c",ch);
//	fseek("%c",ch);
//	fseek(fp,-4,SEEK_CUR);
//	ch=fgetc(fp);
//	printf("%c",ch);
//	fseek(fp,-4,SEEK_END);
//	fgetc(ch);
	fclose(fp);
}
