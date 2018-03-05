#include <u.h>
#include <libc.h>
#include <bio.h>

/* count characters in input; 1st version */
void
main()
{
	long nc;
	Biobuf* in = Bfdopen(0, OREAD);

	nc = 0;
	while (Bgetrune(in) > 0)
		++nc;
	print("%ld\n", nc);
	Bterm(in);
	
	exits(nil);
}
