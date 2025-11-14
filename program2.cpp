#include <stdio.h>
#include <string.h>
int main() 
{
    char line[200];
    printf("Enter the input: ");
    fgets(line, 200, stdin);   
    if (line[0] == '/' && line[1] == '/') 
    {
        printf("It is a comment\n");
    }
    else if (line[0] == '/' && line[1] == '*') 
    {
        int len = strlen(line);
        if (line[len - 2] == '*' && line[len - 1] == '/')
            printf("It is a comment\n");
        else
            printf("It is not a complete comment\n");
    }
    else 
    {
        printf("It is not a comment\n");
    }
    return 0;
}
