#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 *
 * main program using Betty style
 *
 */
int main (void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/*my code starts here*/
	if (n > 0)
		printf("%d is postive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

	return(0);
}
