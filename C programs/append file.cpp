#include <stdio.h>
#include <stdlib.h>
int main(){
	FILE *fp=NULL;
	char str[50];
	fp = fopen("abc.txt","a");
//	if(fp=NULL)
//	{
//		printf("error");
//		exit(1);
//		break;
//	}
	printf("Enter the content you want to append: ");
	gets(str);
	
	fputs(str,fp);
	
//	fprintf(fp,"%s");
	printf("successfully appended");
	fclose(fp);
}
