/*program to calculate the length of a string using pointers */
#include<stdio.h>
main()
{
	char s1[50];
	char*q;
	int len=0;
	printf("Enter string: ");
	gets(s1);
	q=s1;
	while(*q!='\0')
	{
		len++;
		q++;
	}
	printf("Length=%d",len);
}
