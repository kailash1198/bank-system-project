#include <stdio.h>
#include <string.h>
#include <stdlib.h>


//function declaration
void header();
void optionSelection();
void greetingMessage();
void accountOpening();
void LogIn();
void balanceStatus();
void moneyTransfer();
void cashWithrawal();
void updateSetting();

//global variables start here
 int choice;

//main function start from here

void main()
{
    header();
    optionSelection();

    if(choice == 1)
    {
        system("cls");
        accountOpening();
    }
};

//function declaration here

void header()
{
    system("cls");
    printf("\n\n");
    printf("\t\t HDFC Bank, Harohalli ");
    printf("\n");
    printf("\t\t\tBanglore-562112");
    printf("\n");
    printf("\n\n------------------------------------------------------------\n");
    printf("\n\n");
    printf("Please choose below Option:\n");
    printf(" 1. Account Opening\n 2.Log In\n 3. Balance status\n 4. Money transfer\n 5. Withrawal money\n 6. Update setting\n");
};

void optionSelection()
{
    printf("\n\t\t\tYour Choice: ");
    scanf("%d", &choice);
};

void accountOpening()
{
    char details[20][400];
    printf("\n Please Enter Your Details For Open New Account\n\n");
    printf("\n\t\tFirst Name: ");
    scanf("%s", details[0]);
    printf("\t\tSecond Name: ");
    scanf("%s", details[1]);
    printf("\t\tFather Name: ");
    scanf("%s",details[2]);
    printf("\t\tMothers Name: ");
    scanf("%s", details[3]);
    printf("\t\tMothers Name: ");
    scanf("%s", details[4]);
    printf("\t\tMothers Name: ");
    scanf("%s", details[5]);
    printf("\t\tMothers Name: ");
    scanf("%s", details[6]);
    printf("\t\tMothers Name: ");
    scanf("%s", details[7]);
    printf("\t\tMothers Name: ");
    scanf("%s", details[8]);
    printf("\t\tMothers Name: ");
    scanf("%s", details[9]);
    printf("\t\tMothers Name: ");
    scanf("%s", details[10]);
}