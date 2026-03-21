#include<stdio.h>
main()
{
	int x=10;
	printf("x=%d",x);
	decrement(&x);
	printf("\nx=%d",x);
}
void decrement(int *a)
{
	*a=*a-1;
}
