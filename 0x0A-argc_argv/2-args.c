#include <stdio.h>
/**
* main - a program that prints all arguements it receieves.
* @argc: arguement count
* @argv: array of pointers to arguement strings
* Return: 0
*/
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
