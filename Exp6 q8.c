/* program to count the number of even and odd elements in an array using pointers */
#include<stdio.h>
main()
{
int n,i,a[100],even=0,odd=0;
int *p=a;
printf("Enter the size of array:");
scanf("%d",&n);
printf("Enter the array elements:");
for(i=0;i<n;i++)
scanf("%d",(p+i));
for(i=0;i<n;i++)
{
if(*(p+i)% 2 ==0)
{
even++;
}
else
{
	odd++;
}

}
printf("Even=%d,odd=%d",even,odd);
}
