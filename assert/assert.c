#include "assert.h"
#include <stdio.h>
#include <stdlib.h>

void _assert(char *msg)
{
	fputs(msg, stderr);
	fputs(" -- assertion failed\n", stderr);
	abort();
}