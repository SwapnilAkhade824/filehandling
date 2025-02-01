#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

void main() {
	FILE *file = fopen("read.txt", "r");
    char word[100];
    int count = 0;
    while (fscanf(file, "%s", word) != EOF){
    	count++;
    }
    printf("%d", count);
    fclose(file);
}