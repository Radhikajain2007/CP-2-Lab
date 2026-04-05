/* program to reverse a string using call by reference */
#include<stdio.h>
void reverse(char *str)
{
	int i,len=strlen(str);
	char temp;
	for(i=0;i<len/2;i++)
	{
		temp=str[i];
		str[i]=str[len-i-1];
		str[len-i-1]=temp;
	}
}
main()
{
	char str[100];
	printf("Enter a string:");
	scanf("%s",str);
	reverse(str);
	printf("Reversed string:%s\n",str);
}
