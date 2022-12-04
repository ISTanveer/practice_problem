#include<stdio.h>
int main()
{
    double a, b;
    scanf("%lf %lf", &a, &b);
    double *p = &a;
    double *q = &b;
    double aver;
    aver = (*p + *q) /2;


    printf("%lf",aver);
}
