#include"defs.h"

struct S1 {
	char *s;
	struct S1 *s1p;
};

int main()
{
	static struct S1 a[] = {
		{"abcd", a+1},
		{"efgh", a+2},
		{"ijkl", a}
	};

	struct S1 *p[3];
	int i;

	for (i = 0; i < 3; i++)
	{
		p[i] = a[i].s1p;
	}
	PRINT3(s, p[0]->s, (*p)->s, (**p).s);

	swap(*p, a);
	PRINT3(s, p[0]->s, (*p)->s, (*p)->s1p->s);

	swap(p[0], p[0]->s1p);
	PRINT3(s, p[0]->s, (*++p[0]).s, ++(*++(*p)->s1p).s);
}

swap(struct S1 *p1, struct S1 *p2)
{
	char *temp;

	temp = p1->s;
	p1->s = p2->s;
	p2->s = temp;
}






