#include<stdio.h>
int main()
{
    int n,i,j,sum=0,num;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        num=1;
        printf("(");
        for(j=0; j<i; j++)
        {
            printf("%d",num);
            sum+=num;
            num++;
            if(j<i-1)
            {
                printf("+");
            }
        }
        if(i==n)
        {
            printf(")");
        }
        else
        {
            printf(")+");
        }
    }
    printf("= %d\n",sum);
    return 0;
}
