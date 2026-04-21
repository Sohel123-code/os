#include <stdio.h>

int main() {
    int start,length,i;

    printf("Enter start block and length: ");
    scanf("%d%d",&start,&length);

    printf("Allocated blocks:\n");

    for(i=0;i<length;i++)
        printf("%d ",start+i);
}