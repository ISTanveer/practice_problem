#include<stdio.h>
int funn(int a[], int n, int k)
{
   int count=0;
    for(int i=0; i<n; i++)
    {
        if(k!=a[i]) count++;
    }
    return count;
}
int main()
{
    int n, k;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &k);
    printf("%d", funn(a, n, k));
 return 0;
}
