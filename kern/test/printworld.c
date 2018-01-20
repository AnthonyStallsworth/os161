#include <types.h>
#include <lib.h>
#include <test.h>

int
printworld(int nargs, char **args)
{
	(void)nargs;
	(void)args;

	kprintf("%s\n", "Hello, World! (PW)");
	return 0;
}
