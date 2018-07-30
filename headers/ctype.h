#ifndef _CTYPE
#define _CTYPE

#define _CN 0x1	//control
#define _BL	0x2	//blank,include space and tab
#define _AL	0x4	//alphabetic
#define _SP 0x8	//space
#define _DI 0x10	//digit
#define _XD 0x20	//hexadecimal digit
#define _LO 0x40	//lower alphabetic
#define _UP	0x80	//upper alphabetic
#define _PU 0x100	//puctuation
#define _BB 0x200	//stands for '\f','\v','\n','\r'

extern const short *_Ctype, *_Tolower, *_Toupper;

#define isalnum(x) (_Ctype[(int)(x)] & (_LO | _DI | _UP))
#define isalpha(x) (_Ctype[(int)(x)] & (_LO | _UP))
#define isblank(x) (_Ctype[(int)(x)] & _BL)
#define iscntrl(x) (_Ctype[(int)(x)] & _CN)
#define isdigit(x) (_Ctype[(int)(x)] & _DI)
#define isgraph(x) (_Ctype[(int)(x)] & (_PU | _DI | _LO | _UP))
#define islower(x) (_Ctype[(int)(x)] & _LO)
#define isprint(x) (_Ctype[(int)(x)] & (_SP | _PU | _DI | _LO | _UP))
#define ispunct(x) (_Ctype[(int)(x)] & _PU)
#define isspace(x) (_Ctype[(int)(x)] & (_BL | _BB))
#define isupper(x) (_Ctype[(int)(x)] & _UP)
#define isxdigit(x) (_Ctype[(int)(x)] & _XD)

#define tolower(x) (_Tolower[(int)(x)])
#define toupper(x) (_Toupper[(int)(x)])


#endif