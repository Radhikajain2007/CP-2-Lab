//program to input a sentence and display the total number of words
#include<stdio.h>
void words(char s[])
{
	int i,counter=1;
	for(i=0;s[i]!=0;i++)
	
	if(s[i]==32)
	counter++;

	
    
	printf("%d",counter);
	
}
main()
{
	char ch[]="Hello my name is Radhika jain";
	words(ch);
}
