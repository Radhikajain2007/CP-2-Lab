//program to count the number of vowels in a string
#include<stdio.h>
void count(char b[])
{
	int i,count=0;
	for(i=0;b[i]!=0;i++)
	if(b[i]=='a'|| b[i]=='e'|| b[i]=='i'||b[i]=='o'||b[i]=='u'||b[i]=='A'|| b[i]=='E'|| b[i]=='I'|| b[i]=='O'|| b[i]=='U')
	count++;
	printf("%d",count);
}
main()
{
	char ch[]="Hello Programming";
	count(ch);
}
