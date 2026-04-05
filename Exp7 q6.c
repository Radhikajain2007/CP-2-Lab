/* program to find the frequency of a given character in a string using pointers */
#include<stdio.h>
main()
{
int n,i,a[100],freq,count=0;
int *p=a;
printf("Enter the size of array:");
scanf("%d",&n);
printf("Enter the array elements:");
for(i=0;i<n;i++)
scanf("%d",(p+i));
printf("Enter the element to check the frequency:");
scanf("%d",&freq);
for(i=0;i<n;i++)
{
	if(*(p+i)==freq)
	count++;
}
printf("Frequency of %d= %d",freq,count);
}
