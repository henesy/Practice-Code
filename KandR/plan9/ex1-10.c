#include <u.h>
#include <libc.h>
#include <bio.h>

/* copies i/o, replaces tabs w/ \t, backspaces w/ \b and backslashes with \\ */
void
main()
{
	long c;
	Biobuf* in = Bfdopen(0, OREAD);
	Biobuf* out = Bfdopen(1, OWRITE);

	while((c = Bgetrune(in)) > 0)
	{
		if (c == '\t')
		{
			Bputrune(out, '\134');
			Bputrune(out, 't');
		}
		else if (c == '\b')
		{
			Bputrune(out, '\134');
			Bputrune(out, 'b');
		}
		else if (c == '\\')
		{
			Bputrune(out, '\134');
			Bputrune(out, '\134');
		}
		else
			Bputrune(out, c);
	}
	Bflush(out);
	Bterm(in);
	Bterm(out);
}
