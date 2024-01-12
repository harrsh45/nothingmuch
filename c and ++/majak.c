#include <stdio.h>
int cmp(char a[100], char b[100])
{
    char *p = a;
    char *t = b;
    int count = 0;
    while ((*p) != '\0' && (*t) != '\0')
    {
        if ((*t) != (*p))
        {
            count = 1;
        }
        p++;
        t++;
    }
    if (count == 0)
    {
        return 0;
    }
    else {return 1;}
}

void main()
{
    char a[100], b[100];
    printf("enter string 1:");
    scanf("%s", a);
    printf("\nenter string 2:");
    scanf("%s", b);
    int c = cmp(a, b);
    if (c == 0)
    {
        printf("\nstrings are equal ");
    }
    else
    {
        printf("\nthey arent ");
    }
}