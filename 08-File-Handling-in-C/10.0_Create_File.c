// This program prints the file descriptor of newly created file

#include<stdio.h>
#include<fcntl.h>

int main()
{
	int fd;

	// Creating new file
	// If the file does not exist it will be created.  
	// The owner (user ID) of the file is set to the effective user ID of the process.
	// open() and creat() return the new file descriptor, or -1 on failure.

	fd = creat("second.txt",0x777);	// 0x777 : "rwx rwx rwx" (permissions of user, owner, group)

	if(fd == -1)
	{
		printf("Unable to create the file\n");
	}
	else
	{
		printf("File is successfully created with file descriptor %d \n",fd);
	}

	// closing the file.
	close(fd);
}
