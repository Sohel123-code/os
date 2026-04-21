#include <stdio.h>

int main()
{
    int n,m,i,j,k;
    int alloc[10][10], max[10][10], need[10][10];
    int avail[10], finish[10]={0}, safe[10], work[10];

    scanf("%d%d",&n,&m);

    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            scanf("%d",&alloc[i][j]);

    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            scanf("%d",&max[i][j]);

    for(i=0;i<m;i++)
        scanf("%d",&avail[i]);

    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            need[i][j]=max[i][j]-alloc[i][j];

    for(i=0;i<m;i++)
        work[i]=avail[i];

    int count=0;

    while(count<n)
    {
        for(i=0;i<n;i++)
        {
            if(!finish[i])
            {
                for(j=0;j<m;j++)
                    if(need[i][j]>work[j]) break;

                if(j==m)
                {
                    for(k=0;k<m;k++)
                        work[k]+=alloc[i][k];

                    safe[count++]=i;
                    finish[i]=1;
                }
            }
        }
    }

    if(count==n)
    {
        for(i=0;i<n;i++)
            printf("P%d ",safe[i]);
    }
    else
        printf("Not Safe");

    return 0;
}