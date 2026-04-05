/*program to find the largest element in an array using pointers*/
#include<stdio.h>
main()
{
int n,i,a[100],max=0;
int *p=a;
printf("Enter the size of array:");
scanf("%d",&n);
printf("Enter the array elements:");
for(i=0;i<n;i++)
scanf("%d",(p+i));
printf("largest array element:");
max=*p;
for(i=0;i<n;i++)
if(*(p+i)>max)
max=*(p+i);
printf("%d",max);
}
