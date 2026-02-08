#include<stdio.h>
#include<string.h>
void occur(char a[])
{
	int i,c=0,b;
	printf("enter a character to count");
	scanf("%c",&b);
	for(i=0;a[i]!=0;i++)
	{
		if(a[i]==b)
		{
			c++;
		}
	}
	printf("The number of occurance of character %c is %d",b,c);
}
main()
{
	char ch[]="computer programming";
	occur(ch);
}
