#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

void main() {
	FILE *file = fopen("read.txt", "r");
    if(file==NULL){
    	printf("File Not Opened properly");
    }
    char sentence[100];
    int count = 0;
    while (fscanf(file, "%99[^\n]", sentence) != EOF){
    	fgetc(file);
    	for(int i = 0;sentence[i]!='\0';i++){
    		if(sentence[i]=='.') count++;
    	}
    }
    printf("%d", count);
    fclose(file);
}