#include<stdio.h>

int a[] = {0,1,2,3,4};
int *p[] = {a,a+1,a+2,a+3,a+4};
int **pp = p;

main()
{



        printf("%d\t%d\n",a,*a);
        printf("%d\t%d\t%d\n",p,*p,**p);
        printf("%d\t%d\t%d\n",pp,*pp,**pp);

        printf("/n");

        pp++;
        printf("%d\t%d\t%d\n",pp-p,*pp-a,**pp);
        *pp++;
        printf("%d\t%d\t%d\n",pp-p,*pp-a,**pp);
        *++pp;
        printf("%d\t%d\t%d\n",pp-p,*pp-a,**pp);
        ++*pp;
        printf("%d\t%d\t%d\n",pp-p,*pp-a,**pp);
        printf("/n");

        pp=p;
        **pp++;
        printf("%d\t%d\t%d\n",pp-p,*pp-a,**pp);
        *++*pp;
        printf("%d\t%d\t%d\n",pp-p,*pp-a,**pp);
        ++**pp;
        printf("%d\t%d\t%d\n",pp-p,*pp-a,**pp);
}

