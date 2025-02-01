#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

void main() {
	FILE *file = fopen("read.txt","r+");
	char data[100];
	fscanf(file,"%99[^\n]",data);
	for(int i=0;i<strlen(data)-1;i++){
		if(data[i]=='l'){
			data[i]='s';
		}
	}
	rewind(file);
	fputs(data,file);
	printf("Done");
	fclose(file);
}




	