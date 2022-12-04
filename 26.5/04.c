#include<stdio.h>
double radiaa(double n)
{
    return (3.1416*n*n);
}
void solve()
{
    double r;
    scanf("%lf", &r);
    printf("%lf", radiaa(r));
}
int main()
{
    solve();
    return 0;
}
