#include <u.h>
#include <libc.h>
#include <bio.h>

/* count characters in input; 2nd version */
void
main()
{
	double nc;
	Biobuf* in = Bfdopen(0, OREAD);

	for (nc = 0; Bgetrune(in) > 0; ++nc)
		;
	print("%.0f\n", nc);
	Bterm(in);
	
	exits(nil);
}
