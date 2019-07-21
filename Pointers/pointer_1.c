#include<stdio.h>

int a[] = {0,1,2,3,4};
main()
{
        int i, *p;

        for( i=0; i<=4; i++ )
                printf("%d", a[i]);
        printf("\n");

        for( p= &a[0]; p<=&a[4]; p++)
                printf("%d", *p);
        printf("\n");
        printf("\n");

        for( p = &a[0],i=1; i<=5; i++)
                printf("%d",p[i]);
        printf("\n");

        for( p= a,i=0; p+i<=a+4; p++,i++)
                printf("%d", *(p+1));
        printf("\n");
        printf("\n");
        for( p= a+4;p>=a; p--)
                printf("%d",*p);

        printf("\n");

        for( p=a+4,i=0; i<=4 ; i++)
                printf("%d", p[-i]);
        printf("\n");

        for( p=a+4;p>=a; p--)
                printf("%d",a[p-a]);
        printf("\n");
}

