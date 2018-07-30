#include "assert.h"
#include "ctype.h"
#include <limits.h>
#include <stdio.h>

int main()
{
	char *s;
	int c;

	/* test macros for required characters */
	for (s = "0123456789"; *s; ++s)
		assert(isdigit(*s) && isxdigit(*s));
	for (s = "abcdefABCDEF"; *s; ++s)
		assert(isxdigit(*s));
	for (s = "abcdefghijklmnopqrstuvwxyz"; *s; ++s)
		assert(islower(*s));
	for (s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; *s; ++s)
		assert(isupper(*s));
	for(s = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";*s;++s)
		assert(isalpha(*s));
	for(s = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";*s;++s)
		assert(isalnum(*s));
	for (s = "!\"#%&'();<=>?[\\]*+,-./:^_{|}~"; *s; ++s)
		assert(ispunct(*s));
	for (s = "\f\n\r\t\v"; *s; ++s)
		assert(isspace(*s));
	assert(isspace(' ') && isprint(' '));
	assert(iscntrl('\a') && iscntrl('\b'));
	assert(isblank('\t') && isblank(' '));
	for(c=0; c<=UCHAR_MAX; c++)
		if(isprint(c))
			printf("%c", c);
	putchar('\n');
	for(c=0; c<=UCHAR_MAX; c++)
		if(isgraph(c))
			printf("%c", c);
	putchar('\n');

	return 0;
}