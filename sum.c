//function to return the sum of elements of array
#include<stdio.h>
int sum(int[],int);
main()
{
     int a[]={1,9,7,5,8,9};
     sum(a,6);
     system("pause");
}
int sum(int b[],int size)
{
    int i,sum=0;
    for(i=0;i<size;i++)
    sum=sum+b[i];
    printf("%d",sum);
}

     
