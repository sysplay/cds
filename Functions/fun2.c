 #include<stdio.h>
 
 int main()
 {
	int i;
	int fun();
	
	i = fun();
	printf("\ni = %d\n", i);
	fun();
	return 0;
 }

 int fun()
 {
	printf("\nHello\n");
	return 1;
 }
	
