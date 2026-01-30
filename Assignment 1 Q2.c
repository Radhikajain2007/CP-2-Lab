//program to input string and display each character on a new line 
#include<stdio.h>
void string(char a[])
{
	int i;
	for(i=0;a[i]!=0;i++)
	printf("%c\n",a[i]);
}
main()
{
char ch[]="silicon";
string(ch);
}
