#include <u.h>
#include <libc.h>
#include <bio.h>

/* count blanks, tabs, and newlines */
/* '\040' is a space in ASCII represented in octal */
void
main()
{
	long c;
	int b, t, nl;
	Biobuf* in = Bfdopen(0, OREAD);

	b = 0, t = 0, nl = 0;
	while ((c = Bgetrune(in)) > 0)
	{
		if (c == '\040')
			b+=1;
		else if (c == '\t')
			t+=1;
		else if (c == '\n')
			nl+=1;
	}
	print("Blanks: %d\nTabs: %d\nLines: %d\n", b, t, nl);
	Bterm(in);
	
	exits(nil);
}
