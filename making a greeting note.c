#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

int main() {
	FILE *file1 = fopen("greet.txt","w");
	char name[100];
	printf("Enter your name : ");
	scanf("%99[^\n]",name);
	fputs(name,file1);
	printf("Written the data successfully!!!\n");
	fclose(file1);

	FILE *file = fopen("greet.txt","r");
	
	fgets(name,100,file);
	printf("Welcome :-> %s",name);
	fclose(file);
}