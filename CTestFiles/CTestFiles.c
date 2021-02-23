#include "CTestFiles.h"
#include <stdlib.h>
#include "malloc.h"

FILE *OpenFile(FILE *file, char *fileName)
{
	if (fopen_s(file, fileName, "r")==NULL)
	{
		printf_s("The file does not exist");
		return NULL;
	}
	return fopen_s(file, fileName, "r+");
}

char *ReadFile(FILE *file, char *fileName)
{
	char* str = malloc(1000 * sizeof(char));
	do
	{
		*str++ = (char)fgetc(file);

	} while (*str != EOF);
	return str;
}

void ReplaceFile(FILE *file, char *fileName, char *str)
{
	remove(fileName);
	fopen_s(file, fileName, "w+");
	fputs(str, file);
}

void CloseFile(FILE* file)
{
	fclose(file);
}
