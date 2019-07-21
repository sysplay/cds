#include<stdio.h>

int main()
{
	char ch;

	printf("Enter- a,b,c,d,e,f,g,h :\n");
	scanf("%[^,]", &ch);

	while(ch != 'e')
	{
		switch(ch)
		{
			case 'a':
				break;
			case 'b':
				break;
			default:
				break;
		}
			
		printf("%c\n", ch);
		scanf("%*c %[^,]", &ch);
		printf("%c\n", ch);
		
		printf("Here!\n");
	}

	printf("Here now!\n");

	return 0;
}
