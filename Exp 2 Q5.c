#include<stdio.h>
void main()
{
	char s[]="123";
	char rev[100];
	strcpy(rev,s);
	strrev(s);
	if(strcmp(s,rev)==0)
	printf("palindrome number");
	else
	printf("not a palindrome number");
	
}
