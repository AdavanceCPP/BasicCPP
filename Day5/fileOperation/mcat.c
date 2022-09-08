
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc,char *argv[])
{
	
	int fd;
	char buf;

	fd = open(argv[1],O_RDONLY);
	if(fd<0)
	{
		perror("open");
		exit(1);
	}
	while(read(fd,&buf,1))
	{
		write(1,&buf,1);
	}
}
