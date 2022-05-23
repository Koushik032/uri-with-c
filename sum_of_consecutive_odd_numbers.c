#include <stdio.h>
int main()
{
    int n, X, Y, i, j,sum, d, e;
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        scanf("%d %d", &X, &Y);

        if(X%2!=0)
        {
            sum=0;
            for(j=1; j<=Y; j++)
            {
                sum=sum+X;
                X+=2;
            }
            printf("%d\n", sum);
        }
        else
        {
            sum=0;
            X++;

            for(j=1; j<=Y; j++)
            {
                sum+=X;
                X+=2;
            }
            printf("%d\n", sum);
        }
    }
    return 0;
}
