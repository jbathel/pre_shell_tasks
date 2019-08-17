#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main (int argc, char *argv[])
{
	printf ("I am %d\n", (int) getppid());
	return (0);
}
