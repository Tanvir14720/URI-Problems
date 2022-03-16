#include <stdio.h>
int main()
{
    int n, d1, h1, m1, s1, d2, h2, m2, s2, day1, day2, d, hr, m, s;
    scanf("%*s %d", &d1);
    scanf("%d %*s", &h1);
    scanf("%d %*s", &m1);
    scanf("%d", &s1);
    scanf("%*s %d", &d2);
    scanf("%d %*s", &h2);
    scanf("%d %*s", &m2);
    scanf("%d", &s2);
    day1 = s1 + (m1 * 60) + (h1 * 3600) + (d1 * (24 * 60 * 60));
    day2 = s2 + (m2 * 60) + (h2 * 3600) + (d2 * (24 * 60 * 60));
    n = day2 - day1;
    d = n / 86400;
    n = n % 86400;
    hr = n / 3600;
    n = n % 3600;
    m = n / 60;
    s = n % 60;
    printf("%d dia(s)\n", d);
    printf("%d hora(s)\n", hr);
    printf("%d minuto(s)\n", m);
    printf("%d segundo(s)", s);
    return 0;
}