#include<stdio.h>
int main()
{
    int n,r=0,s=0,t;
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    if(t==s)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
}