#include<stdio.h>
int main()
{
	long num=1000;
	long *p;
	p=&num;
	printf("Value of num before changing:%ld\n",num);
	*p=2000;
	printf("Value of num after changing:%ld\n ",num);
	}
