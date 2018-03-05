#include <u.h>
#include <libc.h>
#include <bio.h>

/* copy input to output; 2nd version */
void
main()
{
	long c;
	Biobuf* in = Bfdopen(0, OREAD);
	Biobuf* out = Bfdopen(1, OWRITE);

	while ((c = Bgetrune(in)) > 0)
		Bputrune(out, c);
	Bflush(out);
	Bterm(in);
	Bterm(out);

	exits(nil);
}
