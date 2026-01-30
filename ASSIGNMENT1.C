//Program to take string as input and print it
#include<stdio.h>
void printstr(char s[])
{
	int i;
	for(i=0;s[i]!=0;i++)
	printf("%c",s[i]);
}
main()
{
	char ch[]="Hello programming";
	printstr(ch);
}

