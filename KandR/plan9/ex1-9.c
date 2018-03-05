#include <u.h>
#include <libc.h>
#include <bio.h>

/* copy input to output, replacing strings of 1≤ ␣ with one ␣ */
void
main()
{
	long c;
	int bl;
	Biobuf* in = Bfdopen(0, OREAD);
	Biobuf* out = Bfdopen(1, OWRITE);

	c = bl = 0;
	while ((c = Bgetrune(in)) > 0)
	{
		if (c != '\040')
		{
			bl = 0;
			Bputrune(out, c);
		}
		else if (c == '\040')
		{
			if (bl == 0)
			{
				bl = 1;
				Bputrune(out, c);
			}
			else if (bl > 1)
			{
				bl += 1;
			}
		}
	}
	Bflush(out);
	Bterm(in);
	Bterm(out);
	
	exits(nil);
}
