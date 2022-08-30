#inlcude <stdio.h>
#include <stdlib.h>
int main(){
	FILE *fp=NULL;
	char ch;
	fp=fopen("abc.txt","r");
	if(fp==NULL)
	{
	printf("error");
	exit(1);
	}
	while(!feop(fp)){
		ch=fgetc(fp);
		printf("%c",ch);
	}
	fclose();
}
