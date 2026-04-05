/*program to input an array of integers and print them using pointers*/
#include<stdio.h>
main()
{
int n,arr[100],*p,i;
printf("Enter size:");
scanf("%d",&n);
p=arr;
printf("Enter elements:\n");
for(i=0;i<n;i++)
scanf("%d",(p+i));
printf("Array elements:\n");
for(i=0;i<n;i++)
printf("%d\n",*(p+i));

}
