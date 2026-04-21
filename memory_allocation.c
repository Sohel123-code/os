#include <stdio.h>

int main()
{
    int b[10], p[10], i, j, nb, np;

    printf("Enter number of blocks: ");
    scanf("%d", &nb);

    printf("Enter block sizes:\n");
    for(i=0;i<nb;i++)
        scanf("%d",&b[i]);

    printf("Enter number of processes: ");
    scanf("%d",&np);

    printf("Enter process sizes:\n");
    for(i=0;i<np;i++)
        scanf("%d",&p[i]);

    // -------- FIRST FIT --------
    printf("\nFirst Fit:\n");

    for(i=0;i<np;i++)
    {
        for(j=0;j<nb;j++)
        {
            if(b[j] >= p[i])
            {
                printf("P%d allocated to Block %d\n", i, j);
                b[j] -= p[i];
                break;
            }
        }
    }

    // -------- BEST FIT --------
    printf("\nBest Fit:\n");

    for(i=0;i<np;i++)
    {
        int best = -1;

        for(j=0;j<nb;j++)
        {
            if(b[j] >= p[i])
            {
                if(best == -1 || b[j] < b[best])
                    best = j;
            }
        }

        if(best != -1)
        {
            printf("P%d allocated to Block %d\n", i, best);
            b[best] -= p[i];
        }
    }

    return 0;
}