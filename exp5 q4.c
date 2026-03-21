#include<stdio.h>
int main()
{
	double arr[5]={1.1,2.2,3.3,4.4,5.5};
	double *c;
	int i;
	c=arr;
	printf("Elements of the array using pointer arithmetic:\n");
	for(i=0;i<5;i++)
	{
		printf("%.1lf\n",*(c+i));
	}
}
