#include <u.h>
#include <libc.h>
#include <bio.h>

/* count lines in input */
void
main()
{
	long c;
	int nl;
	Biobuf* in = Bfdopen(0, OREAD);

	nl = 0;
	while ((c = Bgetrune(in)) > 0)
		if (c == '\n')
			++nl;
	print("%d\n", nl);
	Bterm(in);
	
	exits(nil);
}
