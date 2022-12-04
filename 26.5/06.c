#include<stdio.h>
void funn(char *s)
{
    for(int i=0; *(s+i)!='\0'; i++)
    {
        if(*(s+i)>96 && *(s+i)<123)
        {
            if(*(s+i)%2==0) *(s+i) -=32;
        }
    }
}
void solve()
{
    char s[30];
    gets(s);
    funn(s);
    puts(s);
}
int main()
{
    solve();
    return 0;
}
