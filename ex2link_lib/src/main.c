#include <stdio.h>
#include "../../ex2lib/src/bstrlib.h"

int main(int argc, char *argv[])
{
	bstring b = bfromcstr("Hello World! - bstrlib from library\n");
	printf("%s", b->data);
	bdestroy(b);
	return 0;
}
