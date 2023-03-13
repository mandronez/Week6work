#include <stdio.h>
#include <unistd.h>
int main()
{
	int ch=chdir ("Test_Dir");
	
	if(ch<0)
		printf("chdir change of directory not successful\n");
	else
		printf("chdir change of directory successful");
	return 0;
}
