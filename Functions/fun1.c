 #include<stdio.h>
 
 int main()
 {
	int i, *ip;
	void fun(int *);

	i = 5;	
	ip = &i;

	printf("\nBefore function call\n");
	printf("i : %d, Address : %u\n", i, ip);
	fun(ip);
	printf("\nAfter function call\n");
	printf("i : %d, Address : %u\n", i, ip);
	
	return 0;
 }

 void fun(int *p)
 {
	*p = 10;
	 p = (int *)100;
 }
	
