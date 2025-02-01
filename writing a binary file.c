#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

int main() {
	FILE *file = fopen("student.bin", "wb");
	if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
	fwrite("Swapnil\n", sizeof(char), 9, file);
	fclose(file);
	printf("Done");
}