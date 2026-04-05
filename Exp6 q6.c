/* program to find the frequency of a given element in an arryay using pointers*/
#include<stdio.h>
main()
{
int n,i,a[100],key,count=0;
int *p=a;
printf("Enter the size of array:");
scanf("%d",&n);
printf("Enter the array elements:");
for(i=0;i<n;i++)
scanf("%d",(p+i));
printf("Enter the element to check the frequency:");
scanf("%d",&key);
for(i=0;i<n;i++)
{
	if(*(p+i)==key)
	count++;
}
printf("Frequency of %d= %d",key,count);
}
