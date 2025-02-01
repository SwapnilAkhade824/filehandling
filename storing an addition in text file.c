#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

void main() {
	FILE *file = fopen("addition.txt","w");
	int a,b;
	printf("Enter your num1 : ");
	scanf("%d",&a);

	printf("Enter your num2 : ");
	scanf("%d",&b);
	int c = a+b;
	fprintf(file,"%d\n",c);
	printf("Written the data successfully!!!");
	fclose(file);
}