#include <stdio.h>
#include <unistd.h>

/**
 * main - prints the PID of the parent process
 *
 * Return: 0
 */
int main(void)
{
	pid_t ppid;

	printf("%u\n", ppid = getppid());
	
	return (0);
}
