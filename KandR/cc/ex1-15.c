#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

double ftoc(int fahr)
{
	return (5.0/9.0) * (fahr-32);
}

/* print Fahrenheit to Celsius table */
main()
{
	int fahr;

	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
		printf("%3d %6.1f\n", fahr, ftoc(fahr));
}
