#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

//Since several cores execute processes of this program simultaneously, the pairs of strings are printed not in the same order.

int main(){
    int n = 10;
    pid_t pid = fork();
    if(pid==0){
            printf("Hello from child [%d-%d]\n",getpid(),n);
    }
    else{
            printf("Hello from parent [%d-%d]\n",getpid(),n);
    }
    return 0;
}

