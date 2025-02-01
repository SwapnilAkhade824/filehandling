#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

void main() {
	FILE *file = fopen("read.txt","a");
	char data[100] = "Vertex\n";
	fseek(file,20,SEEK_SET);
	fputs(data,file);
	fclose(file);
	printf("Done")
}