#include <stdio.h>
#define MAX 100
int main()
{
    char a[MAX],b[MAX];
    gets(a);
    gets(b);
    printf("%d",strcasecmp(a,b));
    return 0;
}