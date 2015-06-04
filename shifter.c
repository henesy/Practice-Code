#include <u.h>
#include <libc.h>
#include <bio.h>
/* shifts x bits left or right  */
void
main()
{
	Biobuf bin;
	Binit(&bin, 0, OREAD);
	/* int o, c, h; */
	double x, r, o, c, h;
	char y[];

	print("1: >\n2: <\n3: >>\n4: <<\nChoice: ");
	o = atoi(Brdline(&bin, '\n'));
	Bterm(&bin);
	print("1: Number\n2: Text\nChoice: ");
	c = atoi(Brdline(&bin, '\n'));
	print("Shift how many?: ");
	Bterm(&bin);
	h = atoi(Brdline(&bin, '\n'));
	print("Thing to shift: ");
	Bterm(&bin);
	if(c == 1)
		x = atof(Brdline(&bin, '\n'));
	else if(c == 2)
		y[] = Brdline(&bin, '\n');

	if(o == 1)
		r = x > h;
	else if(o == 2)
		r = x < h;
	else if(o == 3)
		r = x >> h;
	else if(o == 4)
		r = x << h;
	
	if(c == 1)
		print("Shifted value: %5.5f\n", x);
	else if(c == 2)
		print("Shifted value: %s\n", y);
		
	
	exits(nil);
}
