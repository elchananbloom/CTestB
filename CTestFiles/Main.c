#include <stdio.h>
#include "CTestFiles.h"
#include <stddef.h>

int main()
{
	FILE *file = OpenFile(file, "file.txt");
	char *str = ReadFile(file, "file.txt");
	ReplaceFile(file, "file.txt", "Hello, Elchanan!");
	CloseFile(file);
	return 0;
}