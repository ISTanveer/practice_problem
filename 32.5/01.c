#include<stdio.h>
int funn(int n,int m)
{
    if(m==0) return 1;
    return n*funn(n,m-1);
}
void solve()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int s=funn(n,m);
    printf("%d", s);
}
int main()
{
    solve();
    return 0;
}
