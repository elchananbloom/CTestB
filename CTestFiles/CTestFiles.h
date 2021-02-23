#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>


/**
* @brief open a file
* @param file
* @param file's name
* @return the file after it's opened
*/
FILE *OpenFile(FILE *file, char* fileName);

/**
* @brief read a file
* @param file
* @param file's name
* @return the text that in the file
*/
char *ReadFile(FILE *file, char *fileName);

/**
* @brief replace the file with char*
* @param file
* @param file's name
* @param replaced char*
*/
void ReplaceFile(FILE *file, char *fileName, char *str);

/**
* @brief close a file
* @param file
*/
void CloseFile(FILE *file);