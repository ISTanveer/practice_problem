#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the three integer");
    scanf("%d %d %d", &a, &b, &c);

    if(a>b&&a>c)
       printf("The biggest number is %d", a);
    else if(b>a&&b>c)
        printf("The biggest number is %d", b);
        else if(c>a&&c>b)
            printf("The biggest number is %d", c);
    else if(a==b&&a>c)
        printf("The biggest number is %d %d", a, b);
    else if(b==c&&b>a)
        printf("The biggest number is %d %d", b, c);
    else if(a==c&&a>b)
        printf("The biggest number is %d %d", a, c);
    else
        printf("They are equal");

}
