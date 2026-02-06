#include<stdio.h>
main()
{
	int c;
	char a[]="hello";
	char b[]="hello";
	c=strcmp(a,b);
	if(c==0)
	printf("string matched");
	else
	printf("string not matched");
	
}
