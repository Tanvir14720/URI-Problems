#include <stdio.h>
int main()
{
    int a, b, n, s;

    scanf("%d %d", &a, &b);

    n = (b - a) + 1;
    s = ((float)n / 2) * (2 * a + (n - 1));
    printf("%d\n", s);

    return 0;
}