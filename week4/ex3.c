#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(){
	char s[1000];
	while(1){
		scanf("%1000s",s);
		system(s);	
	}
	return 0;
}

