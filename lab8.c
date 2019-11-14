// Use gdb to figure out the secret message
// that mystery() returns.

#include <stdio.h>
#include <unistd.h>         // for execl()

char* _x(void);

int main(int argc, char** argv)
{
	char*	phrase = _x();

	printf("phrase = \"%s\"\n", phrase);
	return 0;
}
