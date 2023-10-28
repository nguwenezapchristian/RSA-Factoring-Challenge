#include "rsa.h"

/**
 * main - get the argument passed
 * @argc: argument count
 * @argv: array of arguments
 * Return: always 0 on success
 */

int main(int argc, char **argv)
{
	FILE *file;
	char buffer[1024];
	unsigned long long int a, b, c;
 
	if (argc != 2)
	{
		printf("Usage: ./factors <file>\n");
		return (1);
	}
	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		printf("failed to open the file.\n");
		return (1);
	}
	while (fgets(buffer, sizeof(buffer), file) != NULL)
	{
		a = strtoull(buffer, NULL, 10);
		b = divider(a, 2);
		c = a / b;
		printf("%llu=%llu*%llu\n", a, c, b);
	}
	fclose(file);
	return (0);
}
