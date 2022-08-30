#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *fp=NULL;
	fp = fopen("abc.txt","r+");
	if(fp==NULL)
	{
		printf("error");
		exit(1);
	}
	fputs("Manish",fp);
	fputc('z',fp);
	fclose(fp);
}
