all: T_Assert T_Ctype

T_Assert:T_Assert.c
	gcc -Wall -I../headers ../assert/assert.c T_Assert.c -o assert
T_Ctype:T_Ctype.c
	gcc -Wall -I../headers ../ctype/ctype.c ../assert/assert.c T_Ctype.c -o ctype