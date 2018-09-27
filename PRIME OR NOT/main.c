#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    int Prime=1;
    printf("Enter a no.:");
    scanf("%d",&n);
    if(n==1)
    {
        Prime=0;
    }
    else
    {
        for(i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                Prime=0;
                break;
            }
        }
    }
    if(Prime==1)
        printf("Prime no.");
    else
        printf("Not a prime no.");
    getch();
    return 0;
}
