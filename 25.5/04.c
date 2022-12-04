#include<stdio.h>
int funnn(int n)
{
   printf("%d ", n);
    if(n==1) return 0;
    funnn(n-1);

}

void solve()
{
    int n;
    scanf("%d", &n);
    funnn(n);
}

int main()
{
    solve();
    return 0;
}
