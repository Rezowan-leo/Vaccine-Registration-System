#include<stdio.h>
#include <stdlib.h>
#include<time.h>
#include<string.h>

struct Student{
    char uniId[20];
    char uniName[20];
    char uniDepartment[20];
    int uniBatchNo;
};



int main()
{
     struct Student s;

    printf("                Welcome to                  \n");
    printf("Online Covid-19 Vaccine Registration System\n\n\n");

    while(1){

    int finalChoice;
    FILE *file;
    file = fopen("listOfApplicant.txt","w");

    printf(" ___________________________________\n");
    printf("|      Identity verification:       |\n");
    printf("|                                   |\n");
    printf("| 1. Citizen registration           |\n");
    printf("| 2. Goverment employee             |\n");
    printf("| 3. Student                        |\n");
    printf("| 4. Others                         |\n");
    printf("|___________________________________|\n\n");

    char choice;

    printf("Enter your choice: ");
    scanf("%c",&choice);
    getchar();
    printf("\n");


    switch(choice)
    {

    case '1':
    {
        char nid[50];
        char day[20];
        char month[20];
        char year[20];
        char name1[20];
        char name2[20];
        char division[20];
        char district[20];
        char thana[20];
        char ward[20];
        char gram[20];
        int phone1;
        int phone2;


        printf(" ___________________________________ \n");
        printf("|Selected type: Citizen registration|\n");
        printf("|___________________________________|\n\n");


        printf("Please enter your NID card number: ");
        gets(nid);



        fputs("Name of the applicant: ",file);
        printf("First Name: ");
        gets(name1);
        fputs(name1,file);
        fputs(" ",file);
        printf("Last Name: ");
        gets(name2);
        fputs(name2,file);



        printf("\nDate of birth(according to NID card): \n");
        printf("Year: ");
        gets(year);
        printf("Month: ");
        gets(month);
        printf("Day: ");
        gets(day);
        fputs("\nDate of birth: ",file);
        fputs(day,file);
        fputs("/",file);
        fputs(month,file);
        fputs("/",file);
        fputs(year,file);




        printf("\nPresent address:\n");
        printf("Division: ");
        gets(division);
        printf("District: ");
        gets(district);
        printf("Upazila/Thana: ");
        gets(thana);
        printf("Ward: ");
        gets(ward);
        printf("Gram/Para/Moholla: ");
        gets(gram);
        fputs("\nYour center for vaccination: ",file);
        fputs(gram,file);
        fputs(" Govt. Medical Hospital, ",file);
        fputs(district,file);
        fputs(", Bangladesh",file);




        while(1)
        {
            printf("\n\nEnter your 11 digits phone number: ");
            scanf("%d",&phone1);
            printf("Re-enter your 11 digits phone number: ");
            scanf("%d",&phone2);

            if(phone1==phone2)
            {
                break;
            }
            else
                printf("\n\nYou have entered a wrong number, please try again carefully.");
        }

        printf("\n\n!!An OTP code is sent to your number!!\n\n\n");


        srand(time(0));


        int random = rand();

        int scanRandom;
        printf("|----------|\n");
        printf("|  OTP is  |\n");
        printf("|          |\n");
        printf("|   %d  |\n",random);
        printf("|          |\n");
        printf("|          |\n");
        printf("|          |\n");
        printf("|----------|\n");
        printf("|_1___2___3|\n");
        printf("|_4___5___6|\n");
        printf("|_7___8___9|\n\n\n");

        while(1)
        {
            printf("Enter your OTP code from your mobile: ");
            scanf("%d",&scanRandom);
            if(random==scanRandom)
            {
                break;
            }
            else
                printf("\n\nYou have entered the wrong OTP, please try again!\n\n");

        }


        fclose(file);

            printf("\n\n\n----------------------------------------------------------------------------------------------\n");
            printf("----------------------------------------------------------------------------------------------\n");
            printf("----------------------------------------------------------------------------------------------\n");
            printf("                                   YOUR VACCINATION FORM                                      \n\n\n");

           file = fopen("listOfApplicant.txt","r");
           char ch;

            while(!feof(file)){
                ch = fgetc(file);
                printf("%c",ch);
            }

            fclose(file);

            printf("\nSerial Number: %d",rand());
            printf("\n\nThe date and time of your vaccination will be soon notify via SMS in the number you provided.\n");
            printf("                            till then STAY SAFE, STAY HOME!                                   \n");
            printf("\n\n\n----------------------------------------------------------------------------------------------\n");
            printf("----------------------------------------------------------------------------------------------\n");
            printf("----------------------------------------------------------------------------------------------\n\n\n");

        break;


            }



    case '2':
    {
        char nid[50];
        char day[20];
        char month[20];
        char year[20];
        char name1[20];
        char name2[20];
        char division[20];
        char district[20];
        char thana[20];
        char ward[20];
        char gram[20];
        int phone1;
        int phone2;


        printf(" ___________________________________ \n");
        printf("|Selected type: Goverment employee  |\n");
        printf("|___________________________________|\n\n");


        printf("Please enter your NID card number: ");
        gets(nid);



        fputs("Name of the applicant: ",file);
        printf("First Name: ");
        gets(name1);
        fputs(name1,file);
        fputs(" ",file);
        printf("Last Name: ");
        gets(name2);
        fputs(name2,file);



        printf("\nDate of birth(according to NID card): \n");
        printf("Year: ");
        gets(year);
        printf("Month: ");
        gets(month);
        printf("Day: ");
        gets(day);
        fputs("\nDate of birth: ",file);
        fputs(day,file);
        fputs("/",file);
        fputs(month,file);
        fputs("/",file);
        fputs(year,file);




        printf("\nPresent address:\n");
        printf("Division: ");
        gets(division);
        printf("District: ");
        gets(district);
        printf("Upazila/Thana: ");
        gets(thana);
        printf("Ward: ");
        gets(ward);
        printf("Gram/Para/Moholla: ");
        gets(gram);
        fputs("\nYour center for vaccination: ",file);
        fputs(gram,file);
        fputs(" Govt. Medical Hospital, ",file);
        fputs(district,file);
        fputs(", Bangladesh",file);




        while(1)
        {
            printf("\n\nEnter your 11 digits phone number: ");
            scanf("%d",&phone1);
            printf("Re-enter your 11 digits phone number: ");
            scanf("%d",&phone2);

            if(phone1==phone2)
            {
                break;
            }
            else
                printf("\n\nYou have entered a wrong number, please try again carefully.");
        }

        printf("\n\n!!An OTP code is sent to your number!!\n\n\n");


        srand(time(0));


        int random = rand();

        int scanRandom;
        printf("|----------|\n");
        printf("|  OTP is  |\n");
        printf("|          |\n");
        printf("|   %d  |\n",random);
        printf("|          |\n");
        printf("|          |\n");
        printf("|          |\n");
        printf("|----------|\n");
        printf("|_1___2___3|\n");
        printf("|_4___5___6|\n");
        printf("|_7___8___9|\n\n\n");

        while(1)
        {
            printf("Enter your OTP code from your mobile: ");
            scanf("%d",&scanRandom);
            if(random==scanRandom)
            {
                break;
            }
            else
                printf("\n\nYou have entered the wrong OTP, please try again!\n\n");

        }


        fclose(file);

            printf("\n\n\n----------------------------------------------------------------------------------------------\n");
            printf("----------------------------------------------------------------------------------------------\n");
            printf("----------------------------------------------------------------------------------------------\n");
            printf("                                   YOUR VACCINATION FORM                                      \n\n\n");

           file = fopen("listOfApplicant.txt","r");
           char ch;

            while(!feof(file)){
                ch = fgetc(file);
                printf("%c",ch);
            }

            fclose(file);

            printf("\nSerial Number: %d",rand());
            printf("\n\nThe date and time of your vaccination will be soon notify via SMS in the number you provided.\n");
            printf("                            till then STAY SAFE, STAY HOME!                                   \n");
            printf("\n\n\n----------------------------------------------------------------------------------------------\n");
            printf("----------------------------------------------------------------------------------------------\n");
            printf("----------------------------------------------------------------------------------------------\n\n\n");

        break;



}

    case '3':
 {



        char nid[50];
        char day[20];
        char month[20];
        char year[20];
        char name1[20];
        char name2[20];
        char division[20];
        char district[20];
        char thana[20];
        char ward[20];
        char gram[20];
        int phone1;
        int phone2;
        char school[30];

        printf(" ________________________ \n");
        printf("|Selected type: Student  |\n");
        printf("|________________________|\n\n");





        printf("Please enter your NID card number/Birth certificate number: ");
        gets(nid);

        fputs("\nName of the applicant: ",file);
        printf("First Name: ");
        gets(name1);
        fputs(name1,file);
        fputs(" ",file);
        printf("Last Name: ");
        gets(name2);
        fputs(name2,file);
        printf("\nName of your School/College/University: ");
        fputs("Name of your School/College/University: ",file);
        gets(school);
        fputs(school,file);




        printf("\nDate of birth(according to NID/Birth certificate card): \n");
        printf("Year: ");
        gets(year);
        printf("Month: ");
        gets(month);
        printf("Day: ");
        gets(day);
        fputs("\nDate of birth: ",file);
        fputs(day,file);
        fputs("/",file);
        fputs(month,file);
        fputs("/",file);
        fputs(year,file);




        printf("\nPresent address:\n");
        printf("Division: ");
        gets(division);
        printf("District: ");
        gets(district);
        printf("Upazila/Thana: ");
        gets(thana);
        printf("Ward: ");
        gets(ward);
        printf("Gram/Para/Moholla: ");
        gets(gram);
        fputs("\nYour center for vaccination: ",file);
        fputs(gram,file);
        fputs(" Govt. Medical Hospital, ",file);
        fputs(district,file);
        fputs(", Bangladesh",file);





        while(1){
            printf("\n\nEnter your 11 digits phone number: ");
            scanf("%d",&phone1);
            printf("Re-enter your 11 digits phone number: ");
            scanf("%d",&phone2);

            if(phone1==phone2)
            {
                break;
            }
            else
                printf("\n\nYou have entered a wrong number, please try again carefully.");


        }

        printf("\n\n!!An OTP code is sent to your number!!\n\n\n");


        srand(time(0));


        int random = rand();

        int scanRandom;
        printf("|----------|\n");
        printf("|  OTP is  |\n");
        printf("|          |\n");
        printf("|   %d  |\n",random);
        printf("|          |\n");
        printf("|          |\n");
        printf("|          |\n");
        printf("|----------|\n");
        printf("|_1___2___3|\n");
        printf("|_4___5___6|\n");
        printf("|_7___8___9|\n\n\n");

        while(1)
        {
            printf("Enter your OTP code from your mobile: ");
            scanf("%d",&scanRandom);
            if(random==scanRandom)
            {
                break;
            }
            else
                printf("\n\nYou have entered the wrong OTP, please try again!\n\n");

        }


        fclose(file);

            printf("\n\n\n----------------------------------------------------------------------------------------------\n");
            printf("----------------------------------------------------------------------------------------------\n");
            printf("----------------------------------------------------------------------------------------------\n");
            printf("                                   YOUR VACCINATION FORM                                      \n\n\n");

           file = fopen("listOfApplicant.txt","r");
           char ch;

            while(!feof(file)){
                ch = fgetc(file);
                printf("%c",ch);
            }

            fclose(file);

            printf("\nSerial Number: %d",rand());
            printf("\n\nThe date and time of your vaccination will be soon notify via SMS in the number you provided.\n");
            printf("                            till then STAY SAFE, STAY HOME!                                   \n");
            printf("\n\n\n----------------------------------------------------------------------------------------------\n");
            printf("----------------------------------------------------------------------------------------------\n");
            printf("----------------------------------------------------------------------------------------------\n\n\n");

        break;


            }



    case '4':
    {
        char nid[50];
        char day[20];
        char month[20];
        char year[20];
        char name1[20];
        char name2[20];
        char division[20];
        char district[20];
        char thana[20];
        char ward[20];
        char gram[20];
        int phone1;
        int phone2;
        char identity[20];

        printf("\nEnter your identity type: ");
        gets(identity);

        printf("\n\n");
        printf("Selected type: ");
        puts(identity);
        printf("\n\n");


        printf("Please enter your NID card number: ");
        gets(nid);



        fputs("Name of the applicant: ",file);
        printf("First Name: ");
        gets(name1);
        fputs(name1,file);
        fputs(" ",file);
        printf("Last Name: ");
        gets(name2);
        fputs(name2,file);



        printf("\nDate of birth(according to NID card): \n");
        printf("Year: ");
        gets(year);
        printf("Month: ");
        gets(month);
        printf("Day: ");
        gets(day);
        fputs("\nDate of birth: ",file);
        fputs(day,file);
        fputs("/",file);
        fputs(month,file);
        fputs("/",file);
        fputs(year,file);




        printf("\nPresent address:\n");
        printf("Division: ");
        gets(division);
        printf("District: ");
        gets(district);
        printf("Upazila/Thana: ");
        gets(thana);
        printf("Ward: ");
        gets(ward);
        printf("Gram/Para/Moholla: ");
        gets(gram);
        fputs("\nYour center for vaccination: ",file);
        fputs(gram,file);
        fputs(" Govt. Medical Hospital, ",file);
        fputs(district,file);
        fputs(", Bangladesh",file);




        while(1)
        {
            printf("\n\nEnter your 11 digits phone number: ");
            scanf("%d",&phone1);
            printf("Re-enter your 11 digits phone number: ");
            scanf("%d",&phone2);

            if(phone1==phone2)
            {
                break;
            }
            else
                printf("\n\nYou have entered a wrong number, please try again carefully.");
        }

        printf("\n\n!!An OTP code is sent to your number!!\n\n\n");


        srand(time(0));


        int random = rand();

        int scanRandom;
        printf("|----------|\n");
        printf("|  OTP is  |\n");
        printf("|          |\n");
        printf("|   %d  |\n",random);
        printf("|          |\n");
        printf("|          |\n");
        printf("|          |\n");
        printf("|----------|\n");
        printf("|_1___2___3|\n");
        printf("|_4___5___6|\n");
        printf("|_7___8___9|\n\n\n");

        while(1)
        {
            printf("Enter your OTP code from your mobile: ");
            scanf("%d",&scanRandom);
            if(random==scanRandom)
            {
                break;
            }
            else
                printf("\n\nYou have entered the wrong OTP, please try again!\n\n");

        }


        fclose(file);

            printf("\n\n\n----------------------------------------------------------------------------------------------\n");
            printf("----------------------------------------------------------------------------------------------\n");
            printf("----------------------------------------------------------------------------------------------\n");
            printf("                                   YOUR VACCINATION FORM                                      \n\n\n");

           file = fopen("listOfApplicant.txt","r");
           char ch;

            while(!feof(file)){
                ch = fgetc(file);
                printf("%c",ch);
            }

            fclose(file);

            printf("\nSerial Number: %d",rand());
            printf("\n\nThe date and time of your vaccination will be soon notify via SMS in the number you provided.\n");
            printf("                            till then STAY SAFE, STAY HOME!                                   \n");
            printf("\n\n\n----------------------------------------------------------------------------------------------\n");
            printf("----------------------------------------------------------------------------------------------\n");
            printf("----------------------------------------------------------------------------------------------\n\n\n");

        break;


            }






    }



    if(choice=='1' || choice=='2' || choice=='3' || choice=='4'){
            printf("\nI hereby, declaring that all the information I have given above is correct:-\n");
            printf("\n1.Confirm and save(To finish the registration)\n");
            printf("2.Cancel(If you found any mistakes regarding your information in the form)\n");
            printf("\nEnter your choice: ");
            scanf("%d",&finalChoice);
            getchar();

            if(finalChoice == 1){
                printf("\n\n\n\n\n\n_____________________________________________________________________________________________\n");
                printf("|                                                                                            |\n");
                printf("|            Congratulations! Your registration has been completed successfully.             |\n");
                printf("|                               ©Developed by Mir Rezowan Ahmed                              |\n");
                printf("|____________________________________________________________________________________________|\n");
                break;
            }
            else{
                printf("\n\nPlease be careful in this time while giving your information\n\n");

            }
    }

    }


    return 0;
}
