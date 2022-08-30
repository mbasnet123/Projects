#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *fp=NULL;
	char ch;
	fp = fopen("abc.txt","a+");
	if(fp==NULL)
	{
		printf("no file");
		exit(1);
	}
	
	fputs("This is best",fp);
	rewind(fp);
	while(!feof(fp))
	{
		ch = fgetc(fp);
		printf("%c",ch);
	}
	fputs("This is best",fp);

	fclose(fp);
} 
