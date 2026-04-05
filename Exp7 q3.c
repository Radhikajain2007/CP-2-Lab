/* function to compare two strings using pointers */
#include<stdio.h>
int strcmp(char *a,char *b)
{
	int i,c=0;
	for(i=0;*(a+i)!=NULL||*(b+i)!=NULL;i++)
	if(*(a+i)-*(b+i)!=0)
	{
		c=*(a+i)-*(b+i);
		break;
	}
	return c;
}
main()
{
	if(strcmp("xac","xab"))
	printf("Strings are not equal");
	else
	printf("Strings are equal");
}
