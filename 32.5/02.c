#include<stdio.h>
int funn(int arr[], int n)
{
    if(n==0) return 0;
    int rem = arr[0]%10;
    return rem+funn(arr+1, n-1);
}
void solve()
{
    int n, x;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    int s=funn(arr, n);
    printf("%d", s);
}
int main()
{
    solve();
    return 0;
}
