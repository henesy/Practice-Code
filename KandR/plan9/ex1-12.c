#include <u.h>
#include <libc.h>
#include <bio.h>

/* copies input, one word per line */
void
main()
{
	long c;
	int w;
	Biobuf* in = Bfdopen(0, OREAD);
	Biobuf* out = Bfdopen(1, OWRITE);

	c = w = 0;
	while((c = Bgetrune(in)) > 0)
		if(c == '\n' || c == '\040' || c == '\t'){
			if(w == 1)
				Bputrune(out, '\n');
			w = 0;
		}else{
			w = 1;
			Bputrune(out, c);
		}
	Bflush(out);
	Bterm(in);
	Bterm(out);
	
	exits(nil);
}
