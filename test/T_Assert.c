#define NDEBUG
#include "assert.h"
#include <stdio.h>
#include <signal.h>
#include <stdlib.h>

static void fail_abort(int sig)
{
	puts("test pass and SIGABRT caught");
	exit(EXIT_SUCCESS);
}

int main()
{
	if(signal(SIGABRT, &fail_abort) == SIG_ERR)
	{
		puts("sig fail!");
		exit(EXIT_FAILURE);
	}
	assert(1 == 1);
	assert(1 == 0);

	#undef NDEBUG
	#include "assert.h"
	assert(1 == 3);

	return 0;
}