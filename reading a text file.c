#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

void main() {
	FILE *file = fopen("read.txt","r");
	char data[100];
	fscanf(file,"%99[^\n]",data);
	printf("%s",data);
	fclose(file);
}

