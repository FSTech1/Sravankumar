#include <stdio.h>

#define MAX(x, y, z) ((x > y) ? ((x > z) ? x : z) : ((y > z) ? y : z))

int main() 
{
	int a = 35, b = 25, c = 45;
	int max_num = MAX(a, b, c);

	printf("The greatest number is: %d\n", max_num);
	
	return 0;
}
