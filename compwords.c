#include <u.h>
#include <libc.h>
/* no strings attached ~S */
void
main(int argc, char *argv[])
{
	char *buf1[64*1024+1];
	char *buf2[64*1024+1];
	int a, b, bsize1, bsize2;

	print("Word 1: ");
	bsize1 = read(0, buf1, sizeof(buf1)-1);
	print("Word 2: ");
	bsize2 = read(0, buf2, sizeof(buf2)-1);

	print("Word 1 size: %d bytes\n", bsize1);
	print("Word 2 size: %d bytes\n", bsize2);
	if((memcmp(buf1, buf2, bsize1)) == 0 )
	{
		print("The same word!\n");
	}
	else if((memcmp(buf1, buf2, bsize1)) == 1)
	{
		print("Word 1 is larger!\n");
	}
	else
	{
		print("Word 1 is smaller!\n");
	}


	exits(nil);
}

