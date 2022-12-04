#include<stdio.h>
int lar_small(int a[], int n, int k);
void sortting(int a[], int n, int k);
void solve()
{
    int n, k;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d" , &k);
    sortting(a, n, k);
}

int main()
{
    solve();
    return 0;
}
void sortting(int a[], int n, int k)
{
    int tem;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                tem=a[i];
                a[i]=a[j];
                a[j]=tem;
            }
        }
    }
    int l=k;

    printf("The %d-th smallest number=%d\n",k, lar_small(a, n, l) );
    l=n-k+1;
    printf("The %d-th largest number=%d", k,lar_small(a, n, l));
    return 0;

}

int lar_small(int a[], int n, int k)
{
  return a[k-1];
}
