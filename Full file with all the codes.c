#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>


int main() {

	// FILE *file = fopen("read.txt","r");
	// char data[100];
	// fscanf(file,"%99[^\n]",data);
	// printf("%s",data);
	// fclose(file);

	// FILE *file = fopen("read.txt","w");
	// char data[100] = "Hello World\n";
	// fputs(data,file);
	// fclose(file);
	// printf("Done");

	// FILE *file = fopen("read.txt","r+");
	// char data[100];
	// fscanf(file,"%99[^\n]",data);
	// for(int i=0;i<strlen(data)-1;i++){
	// 	if(data[i]=='l'){
	// 		data[i]='s';
	// 	}
	// }
	// rewind(file);
	// fputs(data,file);
	// printf("Done");
	// fclose(file);

	// FILE *file = fopen("read.txt","a");
	// char data[100] = "Vertex\n";
	// fseek(file,20,SEEK_SET);
	// fputs(data,file);
	// fclose(file);

    // FILE *file = fopen("read.txt", "r");
    // char word[100];
    // int count = 0;
    // while (fscanf(file, "%s", word) != EOF){
    // 	count++;
    // }
    // printf("%d", count);
    // fclose(file);

    // FILE *file = fopen("read.txt", "r");
    // if(file==NULL){
    // 	printf("File Not Opened properly");
    // }
    // char sentence[100];
    // int count = 0;
    // while (fscanf(file, "%99[^\n]", sentence) != EOF){
    // 	fgetc(file);
    // 	for(int i = 0;sentence[i]!='\0';i++){
    // 		if(sentence[i]=='.') count++;
    // 	}
    	
    // }
    // printf("%d", count);
    // fclose(file);

	// FILE *file = fopen("read.txt","r+");
	// char line[250];
	// while(fscanf(file,"%s",line)!=EOF){
	// 	fgetc(file);
	// 	printf("%s",line);
	// 	long size = ftell(file);
	// 	printf("%ld",size);
	// }
	// fseek(file,8,SEEK_SET);
	// fputs("Sarvesh",file);
	// fclose(file);

	// FILE *file = fopen("student.bin", "wb");
	// if (file == NULL) {
    //     printf("Error opening file.\n");
    //     return 1;
    // }
	// fwrite("Swapnil\n", sizeof(char), 9, file);
	// fclose(file);

	// return 0;

    // FILE *file = fopen("data.bin", "wb"); // Open in binary write mode
    // if (file == NULL) {
    //     printf("Error opening file.\n");
    //     return 1;
    // }

    // int numbers[] = {10, 20, 30, 40, 50};
    // fwrite(numbers, sizeof(int), 5, file); // Write 5 integers

    // fclose(file);
    // printf("Data written to binary file.\n");
    // return 0;

	// FILE *file = fopen("student.bin", "rb"); 
    // if (file == NULL) {
    //     printf("Error opening file.\n");
    //     return 1;
    // }
    // char data[100];
    // fread(data,sizeof(char),8,file);
    // printf("The readed data is : %s",data);
    // fclose(file);

	// FILE *file = fopen("student.bin", "ab");
	// if (file == NULL) {
    //     printf("Error opening file.\n");
    //     return 1;
    // }
	// fwrite("Akhade", sizeof(char), 7, file);
	// fclose(file);



    // FILE *file = fopen("data.bin", "rb"); 
    // if (file == NULL) {
    //     printf("Error opening file.\n");
    //     return 1;
    // }

    // int numbers[5];
    // fread(numbers, sizeof(int), 5, file); 

    // fclose(file);

    // printf("Data read from binary file: ");
    // for (int i = 0; i < 5; i++) {
    //     printf("%d ", numbers[i]);
    // }
    // printf("\n");

	// FILE *file = fopen("greet.txt","w");
	// char name[100];
	// printf("Enter your name : ");
	// scanf("%99[^\n]",name);
	// fputs(name,file);
	// printf("Written the data successfully!!!");
	// fclose(file);

	// FILE *file = fopen("greet.txt","r");
	// char name[100];
	// fgets(name,100,file);
	// printf("Welcome :-> %s",name);
	// fclose(file);

	// FILE *file = fopen("addition.txt","w");
	// int a,b;
	// printf("Enter your num1 : ");
	// scanf("%d",&a);

	// printf("Enter your num2 : ");
	// scanf("%d",&b);
	// int c = a+b;
	// fprintf(file,"%d\n",c);
	// printf("Written the data successfully!!!");
	// fclose(file);



}

