#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	FILE *fp=NULL;
	
	char str[50];
	int a=10;
	char ch='s';
	int i;
	fp=fopen("abc.txt","w");
	
	if(fp==NULL)
	{
		printf("error");
		exit(1);
	}
	printf("enter the string: ");
	gets(str);
	
	fprintf(fp,"%d %s %c",a,str,ch);
	
	fclose(fp);
}

