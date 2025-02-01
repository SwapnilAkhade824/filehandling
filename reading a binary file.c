#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

int main() {
	FILE *file = fopen("student.bin", "rb"); 
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    char data[100];
    fread(data,sizeof(char),8,file);
    printf("The readed data is : %s",data);
    fclose(file);
}