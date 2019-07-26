#include"defs.h"

struct S1 {
	char *s;
	int i;
	struct S1 *s1p;
};

int main()
{
	static struct S1 a[] = {
		{"abcd", 1, a+1},
		{"efgh", 2, a+2},
		{"ijkl", 3, a}
	};

	struct S1 *p = a;
	int i;

	PRINT3(s, a[0].s, p->s, a[2].s1p->s);

	for (i = 0; i < 2; i++)
	{
		printf("%d\t", --a[i].i);
		printf("%c\t", ++(a[i].s[3]));
		printf("%s\t", (a[i].s));
		NL;
	}

	PRINT3(s, ++(p->s), a[(++p)->i].s, a[--(p->s1p->i)].s);
}

