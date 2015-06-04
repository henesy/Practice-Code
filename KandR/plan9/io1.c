#include <u.h>
#include <libc.h>

/* copy input to output; Plan 9 style */
void
main()
{
	char buf[64*1024+1];
	int err;

	err = read(0, buf, sizeof(buf));
	while (err != 0)
	{
		if(err == -1)
		{
			/* err is ≤0 when EOF or err, see read(2) */
			exits("read() failure.");
		}
		write(1, buf, err);
		err = read(0, buf, sizeof(buf));
	}
	
	exits(0);
}
