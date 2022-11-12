#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>

// Define Constant KeyWords 
#define ENTER 13
#define TAB 9
#define BKSP 8

void welcomeScreen(void);  // Introduction Page & choice screen 
void exitScreen(void);     // program end screen with credits 
void screenCleaner(void);  // clears the output screen and input buffers 
int userInput(int);    // takes the user input and validates for further opertaions 

// Binary Conversion functions
void binary_decimal(int);
void binary_octal(int);
void binary_hexadecimal(int);

// Decimal Conversion functions 
void decimal_binary(int);
void decimal_octal(int);
void decimal_hexadecimal(int);

// Octal Conversion functions 
void octal_binary(int);
void octal_decimal(int);
void octal_hexadecimal(int);

// Hexadecimal Convesion functions 
void hexadecimal_binary(char []);
void hexadecimal_octal(char []);
void hexadecimal_decimal(char []);

void main()
{
    welcomeScreen();
}

void welcomeScreen()
{
    int choice;

label1:
    screenCleaner();
    printf("-------------------------------------------\n");
    printf(">>> Welcome to Number System Converter <<< \n");
    printf("-------------------------------------------\n\n");

    printf(">> Choice your input type << \n");
    printf("> 1. Binary \n");
    printf("> 2. Decimal \n");
    printf("> 3. Octal \n");
    printf("> 4. Hexadecimal \n");
    printf("> 5. Exit the Program \n\n");
    printf("Enter the number & Hit ENTER: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            userInput(1);
            break;
        case 2:
            userInput(2);
            break;
        case 3:
            userInput(3);
            break;
        case 4:
            userInput(4);
            break;
        case 5:
            exitScreen();
            break;
        default:
            printf("\nError: the number must be between 1 to 4.\n");
            printf("Press any key to continue... \n");
            getch();
            goto label1;
    }
}

void exitScreen()
{
    screenCleaner();
    printf("-------------------------------------------\n");
    printf(" >>> Creator: @Alkaison (Ganesh Mourya) <<< \n");
    printf("-------------------------------------------\n\n");

    printf("> GitHub: https://github.com/Alkaison \n");
    printf("> Twitter: https://twitter.com/Alkaison \n");
    printf("> LinkedIn: https://www.linkedin.com/in/Alkaison \n\n");

    exit(0);
}

void screenCleaner()
{
    system("cls");
    fflush(stdin);
}

int userInput(int choice)
{
    screenCleaner();

    if(choice == 1)
    {    
        int bi;
        int rem, temp=0, flag=0;

        printf("Enter the binary: ");
        scanf("%d", &bi);
        
        temp = bi;

        while(temp > 0)
        {    
            rem = temp % 10;

            if(rem == 0 || rem == 1)
            {  
                temp = temp / 10;
            }
            else
            {
                flag = 1;
                printf("\nError: Binary can only have the digits 0, 1. \n");
                printf("Press any key to continue... \n");
                getch();
                break;
            }
        }

        if(flag == 1)
            welcomeScreen();
        else
        {
            binary_decimal(bi);
            binary_octal(bi);
            binary_hexadecimal(bi);
        }
    }
    else if(choice == 2)
    {
        int deci;

        printf("Enter the decimal: ");
        scanf("%d", &deci);

        if(deci < 0)
        {
            printf("\nError: Decimal number can't be negative. \n");
            printf("Press any key to continue... \n");
            getch();
            welcomeScreen();
        }
        else
        {
            decimal_binary(deci);
            decimal_octal(deci);
            decimal_hexadecimal(deci);
        }
    }
    else if(choice == 3)
    {
        int octal;
        int rem, temp=0, flag=0;

        printf("Enter the octal: ");
        scanf("%d", &octal);

        temp = octal;

        while(temp > 0)
        {    
            rem = temp % 10;

            if(rem >= 0 && rem <=7)
            {  
                temp = temp / 10;
            }
            else
            {
                flag = 1;
                printf("\nError: Octal digits can only be between 0 to 7. \n");
                printf("Press any key to continue... \n");
                getch();
                break;
            }
        }
  
        if(flag == 1)
            welcomeScreen();
        else
        {
            octal_binary(octal);
            octal_decimal(octal);
            octal_hexadecimal(octal);
        }
    }
    else if(choice == 4)
    {
        char hexa[50];
        char ch;
        int i=0, j=0, k=0, flag=0;

        printf("Enter the hexadecimal: ");

        while(1)
        {
            ch = getch();

            if(ch == ENTER || ch == TAB)
            {
                hexa[i] = '\0';
                break;
            }
            else if(ch == BKSP)
            {
                if(i > 0)
                {
                    i--;
                    printf("\b \b"); // for backspace
                }
            }
            else
            {
                hexa[i++] = ch;
                printf("%c", ch);
            }
        }   

        for(j=0; j<i; j++)
        {
            // printf("%d ", isdigit(hexa[j]));
            if((hexa[j] >= 'A' && hexa[j] <= 'F') || (hexa[j] >= 'a' && hexa[j] <= 'f') || isdigit(hexa[j]))
                k++;
            else
            {
                flag = 1;
                printf("\nError: Hexadecimal digits can only be between 0 to 9 & A to F. \n");
                printf("Press any key to continue... \n");
                getch();
                break;
            }
        }   

        if(flag == 1)
            welcomeScreen();
        else
        {
            hexadecimal_binary(hexa);
            hexadecimal_octal(hexa);
            hexadecimal_decimal(hexa);
        }
    }
    else
        printf("\n>> Unexpected Error occured. << \n");
}

// Binary Conversion functions
void binary_decimal(int bi)
{

}

void binary_octal(int bi)
{

}

void binary_hexadecimal(int bi)
{

}

// Decimal Conversion functions 
void decimal_binary(int deci)
{

}

void decimal_octal(int deci)
{

}

void decimal_hexadecimal(int deci)
{

}

// Octal Conversion functions 
void octal_binary(int octal)
{

}

void octal_decimal(int octal)
{

}

void octal_hexadecimal(int octal)
{

}

// Hexadecimal Convesion functions 
void hexadecimal_binary(char hexa[])
{

}

void hexadecimal_octal(char hexa[])
{

}

void hexadecimal_decimal(char hexa[])
{

}
