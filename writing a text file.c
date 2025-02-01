#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

void main() {
	FILE *file = fopen("read.txt","w");
	char data[100] = "Hello World\n";
	fputs(data,file);
	fclose(file);
	printf("Done");
}