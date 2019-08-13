#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(int argc, char** argv)
{
	FILE *fp;
	int i;
	char ch;
	fp=fopen("calender.c","r");
	if(fp==NULL)
	{
		printf("file dose not exist.....");
		exit(1);
	}
	printf("\n The file has.......:\n\n\n");
	i=0;
	while((ch=getc(fp))!=EOF)
	{	
		getch();			
	system("color 0e");
	printf("%c",ch);
	}
	fclose(fp);
	return 0;
}