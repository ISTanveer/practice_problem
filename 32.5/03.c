#include<stdio.h>
int funn(int n)
{
    if(n==0) return 0;
    funn(n-1);
    printf("%d ", n);
}
void solve()
{
    int n;
    scanf("%d", &n);
    int s=funn(n);
}
int main()
{
    solve();
    return 0;
}
