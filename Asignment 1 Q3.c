//program to reverse a given string and display it
#include<stdio.h>
void stringrev(char a[])
{
	int i;
	for(i=0;a[i]!=0;i++)
	printf("%c",a[i]);
	
}
main()
{
	char ch[]="hello world";
	strrev(ch);
	stringrev(ch);
	
}
