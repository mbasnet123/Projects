#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *fp=NULL;
	char str[30];
	fp = fopen("abc.txt","w+");
	if(fp==NULL)
	{
		printf("error");
		exit(1);
	}
	
	fputs("Manish",fp);
	rewind(fp);
	
	while(!feof(fp))
	{
		fgets(str,5,fp);
		printf("%s",str);
	}
//	fputc('z',fp);

	fclose(fp);
}
