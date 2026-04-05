/* function to find the number of words in a string using pointers */
#include<stdio.h>
int countwords(char*c)
{
	int count=0,i=0;
	for(i=0;*(c+i)!=0;i++)
	{
		if(*(c+i)==' ')
		{
			count++;
		}
	}
	return count+1;
}
main()
{
	char ch[]="Hello World";
	printf("Number of words=%d",countwords(ch));
}
