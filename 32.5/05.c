#include<stdio.h>
int funn(int n)
{
    if(n==0) return 0;
    return n+funn(n-1);
}
void solve()
{
    int n;
    scanf("%d", &n);
    int s=funn(n);
    printf("%d", s);
}
int main()
{
    solve();
    return 0;
}
