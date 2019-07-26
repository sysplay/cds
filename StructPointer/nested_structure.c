#include "defs.h"

int main()
{
	static struct S1 {
		char c[4], *s;
	} s1 = {"abc", "def"};

	static struct s2 {
		char *cp;
		struct S1 ss1;
	} s2 = {"ghi", {"jkl", "mno"}};

	//PRINT2(c, s1.c[0], *s1.s);
	PRINT2(s, s1.c, s1.s);

	PRINT2(s, s2.cp, s2.ss1.s);
	PRINT2(s, ++s2.cp, ++s2.ss1.s);
}
