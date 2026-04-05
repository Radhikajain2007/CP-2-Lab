/* program to convert all lowercase characters in a string to uppercase using pointers */
#include<stdio.h>
void lower(char*c)
{
	int i=0;
	for(i=0;*(c+i)!=0;i++)
	{
		if(*(c+i)>='a'&& *(c+i)<='z')
		{
			*(c+i)=*(c+i)-32;
	
		}
    } 
}
main()
{
	char str[100];
	printf("Enter a string:");
	scanf("%s",str);
	lower(str);
	printf("Uppercase string:%s\n",str);
	
}
