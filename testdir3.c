#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

const char *name = "Test2";

int main(void)
{
	mkdir(name, S_IRWXU);

	exit(EXIT_SUCCESS);
}
