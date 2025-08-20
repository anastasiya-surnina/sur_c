
#include <stdio.h>

int main(void)
{
	int a;
	//printf ("input number:\n");
	scanf ("%3d", &a);
	int x;
	x = (a%10) * ((a/10)%10) * ((a/100)%10); 
	printf ("%d", x);
	return 0;
}

