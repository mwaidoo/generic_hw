// Name		: hello.c
// Author	: Michael Aidoo | michael.w.aidoo@nasa.gov
// Created	: 06-13-2024
// Description	: writes the file hello.txt with contents "Hello World!\n"

#include <stdio.h>

int main() {
	FILE *fp;
	fp = fopen("hello.txt", "w");
	fprintf(fp, "Hello World!\n");
	fclose(fp);

	return 0;
}
