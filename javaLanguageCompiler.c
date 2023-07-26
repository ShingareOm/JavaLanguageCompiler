// program for compiling java language by using simple javac command and java command for execution with taking input from user as a file name
// This innovative idea created by Om Shingare.. 
// This project have the LICENCE to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software.
// This project is under the MIT License.
// This project is created by Om Shingare.
// This project is created on 26th of July 2023.
// This project is created in India.
// This project is created in Maharashtra.

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

int main()
{
    char *fileName = (char *)malloc(sizeof(char) * 100);
    char *command = (char *)malloc(sizeof(char) * 100);
    char *withoutExt = (char *)malloc(sizeof(char) * 100);
    printf("Enter the file name: ");
    scanf("%s", fileName);
    strcpy(withoutExt, fileName);
    // append .java extension to the file name
    strcat(fileName, ".java");

    strcpy(command, "javac ");
    strcat(command, fileName);
    printf("%s\n", command);
    system(command);

    strcpy(command, "java ");
    strcat(command, withoutExt);
    printf("%s\n", command);
    system(command);
    getch();
    return 0;
}