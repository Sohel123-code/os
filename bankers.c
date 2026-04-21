#include <stdio.h>

int main() {
    int n = 3, m = 3;

    int alloc[3][3] = {
        {0, 1, 0},
        {2, 0, 0},
        {3, 0, 2}
    };

    int max[3][3] = {
        {7, 5, 3},
        {3, 2, 2},
        {9, 0, 2}
    };

    int avail[3] = {3, 3, 2};

    int need[3][3];
    int finish[3] = {0};
    int safeSeq[3];

    // Calculate Need
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            need[i][j] = max[i][j] - alloc[i][j];

    int count = 0;

    while(count < n) {
        int found = 0;

        for(int i=0;i<n;i++) {
            if(finish[i] == 0) {
                int flag = 1;

                for(int j=0;j<m;j++) {
                    if(need[i][j] > avail[j]) {
                        flag = 0;
                        break;
                    }
                }

                if(flag) {
                    for(int j=0;j<m;j++)
                        avail[j] += alloc[i][j];

                    safeSeq[count++] = i;
                    finish[i] = 1;
                    found = 1;
                }
            }
        }

        if(found == 0) {
            printf("System is NOT in safe state\n");
            return 0;
        }
    }

    printf("System is in SAFE state\nSafe sequence: ");
    for(int i=0;i<n;i++)
        printf("P%d ", safeSeq[i]);

    return 0;
}