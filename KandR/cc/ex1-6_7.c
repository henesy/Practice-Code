#include <stdio.h>

/* copy input to output; 2nd version */
main()
{
	int c;
	int test;

	while ((c = getchar()) != EOF)
		test = getchar() != EOF;
		printf("%d", test);
		putchar(c);
}
