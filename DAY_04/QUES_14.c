#include <stdio.h>

int main()
{
    int n, a = 0, b = 1, c = 0;

    printf("Enter the required term: ");
    scanf("%d", &n);

    for (int i = 1; i < n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }

    printf("%d", a);

    return 0;
}