/*program to create a structure named complex and define a function incrcomplex() to increment the value of both real and imaginary members by 1*/
#include<stdio.h>
struct complex
{
	int r,i;
};
main()
{
	struct complex c;
	printf("Enter real and imaginary parts:");
	scanf("%d %d",&c.r,&c.i);
	incrcomplex(&c);
	printf("After increment:%d + %di\n",c.r,c.i);
	
}
incrcomplex(struct complex*c)
{
	c->r+=1;
	c->i+=1;
}
