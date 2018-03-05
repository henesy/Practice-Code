#include <u.h>
#include <libc.h>
#include <bio.h>

/* count digits, white space, others */
void
main()
{
	int i, nwhite, nother;
	long c;
	int ndigit[10];
	Biobuf* in = Bfdopen(0, OREAD);
	Biobuf* out = Bfdopen(1, OWRITE);

	nwhite = nother = 0;
	for (i = 0; i < 10; ++i)
		ndigit[i] = 0;

	while ((c = Bgetrune(in)) > 0)
		if (c >= '0' && c <= '9')
			++ndigit[c-'0'];
		else if (c == ' ' || c == '\n' || c == '\t')
			++nwhite;
		else
			++nother;
	
	print("digits =");
	for (i = 0; i < 10; ++i)
		print(" %d", ndigit[i]);
	print(", white space = %d, other = %d\n", 
		nwhite, nother);
	Bflush(out);
	Bterm(in);
	Bterm(out);

	exits(nil);
}
