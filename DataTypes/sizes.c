/* sizes.c: PRINTING THE SIZE OF BASIC DATATYPES */
#include <stdio.h>

int main()
{
        printf("\nSizeof(char): %u Bytes\n",sizeof(char));
        printf("\nSizeof(short): %u Bytes\n",sizeof(short));
        printf("\nSizeof(int): %u Bytes\n",sizeof(int));
        printf("\nSizeof(long): %u Bytes\n",sizeof(long));
        printf("\nSizeof(long long): %u Bytes\n",sizeof(long long));
        printf("\nSizeof(float): %u Bytes\n",sizeof(float));
        printf("\nSizeof(double): %d Bytes\n",sizeof(double));
        printf("\nSizeof(long double): %u Bytes\n",sizeof(long double));
        printf("\nSizeof(pointer): %u Bytes\n",sizeof(short *));
        printf("\nSizeof(void): %u  Bytes\n",sizeof(void));

        return 0;
}

