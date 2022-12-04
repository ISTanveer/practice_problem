#include<stdio.h>

int funnn(int n, int count)
{

    count += n;
    if(n==1) return count;
    funnn(n-1, count);
}

void solve()
{
    int n;
    scanf("%d", &n);
    printf("%d", funnn(n, 0));
}
int main()
{
    solve();
    return 0;
}
