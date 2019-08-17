#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *buffer;
	size_t bufsize = 32;

	buffer = (char *)malloc(bufsize * sizeof(char));
	if( buffer == NULL)
	{
		perror("Unable to allocate buffer");
		exit(1);
	}

	printf("$ ");
	*buffer = getline(&buffer -1, &bufsize, stdin);
	printf("%s\n", buffer);

	return(0);
}
