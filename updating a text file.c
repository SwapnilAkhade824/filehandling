#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

void main() {
	FILE *file = fopen("read.txt","r+");
	char line[250];
	fseek(file,8,SEEK_SET);
	fputs("Sarvesh",file);
	fclose(file);
	printf("Done");
}