#include <stdio.h>

int main()
{
    int n, a = 0, b = 1,c;

    printf("ENTER NUMBER OF TERMS: ");
    scanf("%d", &n);

    if (n >= 1)
        printf("%d\t", a);  // If n is 1 then only one term 0 is printed 

    if (n >= 2)
        printf("%d\t", b);  // If n is 2 then only two terms 0 1 is printed

    for (int i = 2; i < n; i++)
    {
        c = a + b;
        printf("%d\t", c);

        a = b;
        b = c;
    }

    return 0;
}