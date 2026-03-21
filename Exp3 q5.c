//demonstrate the use of bitfield
#include<stdio.h>
struct test
{
	int d1:2;
};
main()
{
	struct test d1={322};
	printf("%d",d1);
	
}
