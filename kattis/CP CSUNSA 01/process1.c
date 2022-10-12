#include <stdio.h>
#include <unistd.h>

int main(){
	int r = fork();
    //int a = fork();
    int cont = 0;
	if(r==0){
		printf("PID del proceso hijo(r): %d\n", getpid());
		printf("child:hello: %d\n", cont);
        if(fork()) printf("child:hy:\n");
	}else{
		printf("PID del proceso principal(r): %d\n", getpid());
		printf("parent:hello\n");
	}
	return 0;
}