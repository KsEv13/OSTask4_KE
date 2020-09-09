#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

//Process, which expects to execute n fork-s, executes processes, which expect to execute n-1, n-2 ...,0 fork-s.
//2^3 processes are created for 3 fork() executions
//2^5 processes are created for 5 fork() executions

int main(){
	int i;
	for(i=0;i<5;i++){
		fork();
	}
	sleep(5);
	return 0;
}
