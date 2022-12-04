#include<stdio.h>
int power(int n);
int funn(char s[], int n);
void solve()
{
    char s[30];
    int count;
    scanf("%s", s);
    count=funn(s, 30);

    if(power(count)==1) printf("YES");
    else printf("NO");

}

int main()
{
    solve();
    return 0;
}

int funn(char s[], int n)
{
    int count=0;
    for(int i=0; s[i]!='\0'; i++)
    {
        count += (s[i]-96);
    }
    return count;
}
int power(int n)
{
    int i=1, c=1;
    while(1)
    {
        if(pow(2, i)==n) return c;
        if(pow(2, i)>n) return 0;
        i++;
    }
}
