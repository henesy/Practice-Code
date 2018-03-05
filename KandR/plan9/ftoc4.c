#include <u.h>
#include <libc.h>
#include <bio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

/* print Fahrenheit to Celsius table */
void
main()
{
	int fahr;

	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
		print("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr-32));
	
	exits(nil);
}

