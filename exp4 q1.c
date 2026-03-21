#include<stdio.h>
struct bit{
	unsigned int value:4;
};
int main()
{
	struct bit n;
	n.value=12;
	printf("stored value:%u\n",n.value);
	return 0;
}
