#include <stdio.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
    
    
    pid_t pid;
    pid=fork();
    
    if(pid<0){
        printf("fork is not possible");
    }
    else if(pid==0){
        
        printf("child process executing");
        
        execl("/bin/ls","ls",NULL);
        
        
        printf("this will not execute");
    }
    
    else{
        
        wait(NULL);
        printf("parent process is resumedd");
        
        
    }
    
    return 0;
}