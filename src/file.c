#include <stdio.h>

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include "file.h"
#include "common.h"


int create_db_file(char *filename) {
	//so we need to create the file
	//check to see if the file exists
	int fd = open(filename, O_RDONLY);
	if (fd != -1)
	{
		printf("File %s Already Exists\n", filename);
		return -1;
	}

	fd = open(filename, O_RDWR | O_CREAT, 0644);
	if (fd == -1)
	{
		perror("open");
		return -1;
	}



}

int open_db_file(char *filename) {

	int fd = open(filename, O_RDWR, 0644);
	if(fd == -1){
		perror("open");
		return -1;
	}
}
