#include <u.h>
#include <libc.h>
#include <bio.h>

/* arbitrary demo of bio.h working and multi-functionalism */
double
f1(int num)
{
	double a = sqrt(num);

	return(a);
}

void
main()
{
	Biobuf bin;
	Biobuf bout;
	Binit(&bin, 0, OREAD);
	Binit(&bout, 1, OWRITE);
	
	Bprint(&bout, "Number to √: ");
	Bflush(&bout);
	double b = atof(Brdline(&bin, '\n'));
	double c = f1(b);

	print("√%6.5f = %6.5f\n", b, c);

	exits(nil);
}
