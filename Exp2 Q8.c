#include<stdio.h>
#include<string.h>
main()
{
	char a[]=" silicon";
	char b[]="university";
	char x= strstr(a,b);
	if(x!=0)
	printf("substring present");
	else
	printf(" no substring present");
}
