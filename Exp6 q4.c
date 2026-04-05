/* function to calculate the sum of all elements in an array using pointers*/
#include<stdio.h>
int sumarray(int *p, int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
	{
		sum+=*(p+i);
	}
	return sum;
}
main()
{
int n,i,a[100];
printf("Enter the size of array:");
scanf("%d",&n);
printf("Enter the array elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
int result=sumarray(a,n);
printf("Sum of array elements:%d",result);

}
