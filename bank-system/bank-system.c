#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//=================FUNCTION DECLARATION=========================
void header();
void bankHeader();
void greetingMessage();
void selectChoice();
void accountOpening();
void LogIn();
void dashboard();
void balanceStatus();
void moneyTransfer();
void cashWithrawal();
void updateSetting();


//===============GLOBAL VARIABLE DECLARATION===================
int choice;
int homePage;
char logInUsername[100]="kailash414243@gmail.com";
char logInPassword[20]="kailashK8@";
char userAccountNumber[100]="33830074382";
char userMobileNumber[12]="7992388076";

//===============MAIN FUNCTION START HERE==========================
void main()
{
    repeat:
    header();
    selectChoice();

    if(choice==1)
    {
        system("cls");
        bankHeader();
        accountOpening();
        greetingMessage();
        system("cls");
        header();
        goto repeat;
    }
    else if(choice==2)
    {
        system("cls");
        bankHeader();
        logIn();
        printf("Press 1 for Go to Home Page: ");
        scanf("%d", &homePage);
        if(homePage==1)
        {
            goto repeat;
        }
        else
        {
            exit(1);
        }
    }
    else if(choice==3)
    {
        system("cls");
        bankHeader();
        balanceStatus();
        printf("Press 1 for Go to Home Page: ");
        scanf("%d", &homePage);
        if(homePage==1)
        {
            goto repeat;
        }
        else
        {
            exit(1);
        }
    }
    else if(choice==4)
    {
        system("cls");
        bankHeader();
        logIn();
        moneyTransfer();
        printf("Press 1 for Go to Home Page: ");
        scanf("%d", &homePage);
        if(homePage==1)
        {
            goto repeat;
        }
        else
        {
            exit(1);
        }
    }
    
    
};
//==============MAIN FUNCTION CLOSE HERE=======================

//===============FUNCTION DEFINITION START HERE===================

void header()          
{
    system("cls");
    printf("\n\n");
    printf("\t\t HDFC Bank, Harohalli ");-
    printf("\n");
    printf("\t\t\tBanglore-562112");
    printf("\n");
    printf("\n\n---------------------------------------------------------------------------\n");
    printf("\n\n");
    printf("Please choose below Option:\n");
    printf(" 1. Account Opening\n 2.Log In\n 3. Balance status\n 4. Money transfer\n 5. Withrawal money\n 6. Update setting\n");

};

void bankHeader()    
{
    printf("\n\n");
    printf("\t\t HDFC Bank, Harohalli ");
    printf("\n");
    printf("\t\t\tBanglore-562112");
    printf("\n\n---------------------------------------------------------------------------\n");
    printf("\n");
};

void greetingMessage()
{
    system("cls");
    printf("\n\n\n\t\t CONGRATULATIONS \n\n\n\n\n");          
};

void selectChoice()
{
    printf("\n\n\t\tYour choice: ");
    scanf("%d", &choice);
};
void accountOpening()
{

    char details[12][200];
    printf("\n\t\t\t Please Fill The Form: \n\n");
    printf("\n\t\t First Name: ");
    scanf("%s", details[0]);
    printf("\t\t Second Name: ");
    scanf("%s", details[1]);
    printf("\t\t Fathers Name: ");
    scanf("%s", details[2]);
    printf("\t\t Mothers Name: ");
    scanf("%s", details[3]);
    printf("\t\t Current Address: ");
    scanf("%s", details[4]);
    printf("\t\t Permanant Address: ");
    scanf("%s", details[5]);
    printf("\t\t Mobile Number: ");
    scanf("%s", details[6]);
    printf("\t\t Email: ");
    scanf("%s", details[7]);
    printf("\t\t Second Moibile Numnber: ");
    scanf("%s", details[8]);
    printf("\t\t Gender: ");
    scanf("%s", details[9]);
    printf("\t\t Date Of Birth: ");
    scanf("%s", details[10]);
    printf("\t\t Country: ");
    scanf("%s", details[11]);
    printf("\t\t Nationality: ");
    scanf("%s", details[12]);
};

void logIn()
{
    char userName[100];
    char password[20];
    printf("\n\t\t\t\t LOG IN \n");
    printf("\n\n\n\n");
    printf("\t\t\t USERNAME: ");
    scanf("%s", userName);
    printf("\t\t\t PASSWORD: ");
    scanf("%s", password);

    if(strcmpi(userName, logInUsername)==0)
    {
        if(strcmp(password, logInPassword)==0)
        {
            printf("\n\n\n\t\t\tLog In Success\n\n\n\n\n\n\n");
            dashboard();
        }
    }
    else
    {
        printf("Please enter valid Log In id and Password");
    }
};

void dashboard()
{
    system("cls");
    bankHeader();
    printf("Name: Kailash Kumar");
    printf("\t\t\t Opening Date: 10.01.2022\n");
    printf("Accounr Number: %s", userAccountNumber);
    printf("\t\t Balance: 2821313.00\n");
    printf("Ifsc Code: dhd933");
    printf("\t\t\t Card Number: 3243 3432 2432");
    printf("\n\n\n");
    printf("\n\n\n\n");

};

void balanceStatus()
{
    char accountNumber[100];
    char mobilenumber[12];
    printf("\n");
    printf("Enter Your Account Number: ");
    scanf("%s", accountNumber);
    printf("Enter Your Mobile Number: ");
    scanf("%s", mobilenumber);

    if(strcmp(accountNumber, userAccountNumber)==0)
    {
        if(strcmp(mobilenumber, userMobileNumber)==0)
        {
            system("cls");
            printf("\n\n\n");
            printf("Name: Kailash Kumar");
            printf("\nDate: 11.02.2022");
            printf("\nTime: 11:04");
            printf("\nAccount Number: %s", userAccountNumber);
            printf("\nCurrent Balance: 1918181.00");
            printf("\n\n\n");
        }
    }
};

void moneyTransfer()
{
    char details[10][300];
    printf("\n");
    printf("Receiver Name: ");
    scanf("%s", details[0]);
    printf("Account Number: ");
    scanf("%s", details[1]);
    printf("IFSC Code: ");
    scanf("%s", details[2]);
    printf("Branch: ");
    scanf("%s", details[3]);
    printf("Bank Name: ");
    scanf("%s", details[4]);
    printf("Amount: ");
    scanf("%s", details[5]);
    printf("Remarks: ");
    scanf("%s", details[6]);
    printf("Mobile Number: ");
    scanf("%s", details[7]);
}

//====================FUNCTION DEFINITION END HERE=====================