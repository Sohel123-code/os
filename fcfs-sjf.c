#include<stdio.h>

int main(){
    
    
    int i,n,j;;
    int bt[20],tat[20],wt[20];
    
    printf("enter number of process\n");
    scanf("%d",&n);
    
    printf("enter the  burst  timmes\n");
    for(int i=0;i<n;i++){
        scanf("%d",&bt[i]);
    }
    
    //fcfs
    
    wt[0]=0;
    for( i=1;i<n;i++){
        
        wt[i]=wt[i-1]+bt[i-1];
        
    }
    
    for(i=0;i<n;i++){
        tat[i]=wt[i]+bt[i];
    }
    
    
    printf("FCFS\n");
    printf("TAT\tBT\tWt\n");
    
    for(i=0;i<n;i++){
        printf("%d\t%d\t%d\n",tat[i],bt[i],wt[i]);
    }
    
    //sjf
    
    for(i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(bt[i]>bt[j]){
                int temp=bt[i];
                bt[i]=bt[j];
                bt[j]=temp;
            }
        }
    }
    
    wt[0]=0;
    for( i=1;i<n;i++){
        
        wt[i]=wt[i-1]+bt[i-1];
        
    }
    
    for(i=0;i<n;i++){
        tat[i]=wt[i]+bt[i];
    }
    
    printf("SJF\n");
    printf("TAT\tBT\tWt\n");
    
    for(i=0;i<n;i++){
        printf("%d\t%d\t%d\n",tat[i],bt[i],wt[i]);
    }

    return 0;
    
}