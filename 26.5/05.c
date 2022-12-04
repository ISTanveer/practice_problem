#include<stdio.h>
void find_out(int *a, int n)
{
    int count=0;
    for(int i=0; i<n; i++)
    {
        if(*(a+i)%10==0)
        {
            count += *(a+i);
        }
    }
    printf("%d", count);
}
void solve()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    find_out(a, n);
}
int main()
{
    solve();
    return 0;
}
