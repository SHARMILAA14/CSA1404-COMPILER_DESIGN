#include <stdio.h>
#include <ctype.h>
int main() 
{
    char input[100];
    int i = 0;
    printf("Enter expression: ");
    fgets(input, 100, stdin);
    i = 0;
    while (input[i] != '\0') 
	{
        if (input[i] == ' ') 
		{
            i++;
            continue;
        }
        if (isalpha(input[i])) 
		{
            printf("Identifier : %c \n", input[i]);
        }
        else if (isdigit(input[i])) 
		{
            printf("Constant : %c \n", input[i]);
        }
        else if(input[i]==',' || input[i]==';')
		{
            printf("Sperator : %c \n",input[i]);
        }
        else if (input[i] == '+' || input[i] == '-' || 
                 input[i] == '*' || input[i] == '/' || 
                 input[i] == '=')
        {
            printf("Operators : %c \n", input[i]);
        }
        else if (input[i] != '\n') 
		{
            printf("Symbol : %c \n", input[i]);
        }
        i++;
    }
    return 0;
}
