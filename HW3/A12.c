
#include <stdio.h>

int main(void)
{
	int a;
	//printf ("input number:\n");
	scanf ("%3d", &a);
	int sum;
	sum = a%10; 
	sum += (a/10)%10; 
	sum += (a/100)%10;
	printf ("%d", sum);
	return 0;
}

