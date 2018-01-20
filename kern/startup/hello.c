/* Anthony Stallsworth
 *
 * Writing a simple "hello()" function for the kernel to call
 * during/before boot-up. This will help me learn the steps
 * involved with adding a source file to the kernel.
 */

#include <types.h>
#include <lib.h>
#include <test.h>

void hello()
{
	kprintf("%s\n", "Hello, World!");
}
