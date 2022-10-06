#include <stdio.h>

/* just a try on */

int main (void)
{
	char p,n;
	int a;

	printf("write your initial, followed by your age:");
	scanf("%c %c %d", &p, &n, &a);
	printf("your login is now: %c%c and your passworld is: %d.\n", p, n, a);

	return(0);
}
