#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
int main(){
	int fd;
	extern int errno;
	char * err_msg;
	fd = open("1.txt", O_RDONLY);
	if (fd == -1){
		perror("open file:");	
	}
	fd = open("1.txt", O_RDONLY);
	if (fd == -1){
	printf("errno=%d\n",errno); 
	err_msg = strerror(errno);
	printf("msg: %s\n",err_msg);
}	
	return 0;
}
