#include<stdio.h>

int n, arr[10], *top;

int *top2(int n, int array[])
{
	int last, second_last;
	int big2[2];
	
	last = array[n-1];
	second_last = array[n-2];

	big2[0] = last;
	big2[1] = second_last;
	return big2;
}

void fun(int a, int b)
{
	printf("\na = %d, b = %d\n", a, b);
}

int main()
{
	int i;

	printf("\nEnter the Number of Elements (2<= n <= 10) :");
	scanf("%d", &n);
	
	printf("\nEnter %d Elements\n", n);
	
	for(i = 0; i < n; i++)
		scanf("%d", &arr[i]);
		
	top = top2(n, arr);

	printf("%d: %d\n", top[0], top[1]);
	return 0;
}


