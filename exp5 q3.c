#include<stdio.h>
main()
{
	char ch[]="silicon university";
	char *c=ch;
	int i=0;
	for(i=0;*(c+i)!=NULL;i++)
	printf("%c",*(c+i));
	}
