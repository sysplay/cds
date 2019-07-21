#include <stdio.h>

#define print_expr(expr) printf(#expr " = 0x%X\n---\n", expr)

int main()
{
	unsigned char p, q, r;
	unsigned int s;
	int i;
	unsigned int u;

	p = 0xA4;
	q = 0x69;

	r = p & q; 
	print_expr(r);
	print_expr(p & q);

	r = p | q; 
	print_expr(r);
	print_expr(p | q);

	r = p ^ q; 
	print_expr(r);
	print_expr(p ^ q);

	r = ~p; 
	print_expr(r);
	print_expr(~p);
	print_expr(p);

	r = p >> 2; 
	print_expr(r);
	print_expr(p >> 2);
	print_expr(p);

	r = p << 2; 
	s = p << 2; 
	print_expr(r);
	print_expr(s);
	print_expr(p << 2);
	print_expr(p);

	print_expr(p & ~(1 << 2));
	//print_expr(p = p & ~(1 << 2));
	print_expr(p);

	print_expr(p | (1 << 0));
	//print_expr(p = p | (1 << 0));
	print_expr(p);

	i = (signed char)(p);
	print_expr(i);

	u = (signed char)(p);
	print_expr(u);

	i = ~0;
	printf("As signed int: %d; As unsigned int: %X; 2's complement: %d.\n", i, i, ~0 + 1);

	return 0;
}
