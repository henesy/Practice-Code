#include <u.h>
#include <libc.h>

void
main()
{
	char buf[64*1024+1];
	/* int nbuf=0; */
	/* int n = 0; */

	read(0, buf, sizeof(buf));
	print("%s\n", buf);

	exits(0);
}
