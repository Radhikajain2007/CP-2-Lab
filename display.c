//function to return the smallest element of the array
#include<stdio.h>
int minarray(int[],int);
main()
{
     int a[]={2,5,6,9,2,1};
     printf("smallest element is %d",minarray(a,6));
     system("pause");
}
int minarray(int b[],int size)
{
    int i,min;
    min=b[0];
    for(i=0;i<size;i++)
    if(b[i]<min)
    min=b[i];
    return min;
}

     
