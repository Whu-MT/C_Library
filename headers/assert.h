#undef assert

#ifdef NDEBUG
	#define assert(exp) ((void) 0)
#else
	void _assert(char *);
	#define _STR(x) _VAL(x)
	#define _VAL(x) #x
	#define assert(exp) ((exp) ? (void) 0:\
		_assert(__FILE__":"_STR(__LINE__)" "#exp))
#endif