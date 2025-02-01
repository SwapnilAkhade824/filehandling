#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

int main() {
	FILE *file = fopen("student.bin", "ab");
	if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
	fwrite("Akhade", sizeof(char), 7, file);
	fclose(file);
	printf("Done");
}