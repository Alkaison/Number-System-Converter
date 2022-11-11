#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void welcomeScreen(void);  // Introduction Page & choice screen 
void exitScreen(void);     // program end screen with credits 
void screenCleaner(void);  // clears the output screen and input buffers 
int userInput(int);    // takes the user input and validates for further opertaions 

// Binary Conversion functions
void binary_decimal(void);
void binary_octal(void);
void binary_hexadecimal(void);

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
            binary_decimal();
            binary_octal();
            binary_hexadecimal();
        }
    }
    else if(choice == 2)
    {
        
    }
    else if(choice == 3)
    {

    }
    else if(choice == 4)
    {

    }
    else
        printf("\n>> Unexpected Error occured. << \n");
}

void binary_decimal()
{

}

void binary_octal()
{

}

void binary_hexadecimal()
{

}