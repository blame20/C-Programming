#include <stdio.h>
#include <stdlib.h>


int main() 
{

    char companyName[] = "Software University";
    char companyAddress[] = "15-18 Tintyava, Sofia";
    char phoneNumber[] = "+359 899 55 55 92";
    char faxNumber[] = "(No fax)";
    char website[] = "http://softuni.bg";
    char ManagerFirstName[] = "Svetlin";
    char ManagerLastName[] = "Nakov";
    unsigned int ManagerAge = 25;
    char managerPhone[] = "+359 2 981 981";
    
    printf("%s\n",companyName);
    printf("Address: %s\n",companyAddress);
    printf("Tel. %s\n",phoneNumber);
    printf("Fax: %s\n",faxNumber);
    printf("Web site: %s\n",website);
    printf("Manager: %s %s (age: %u, tel. %s) \n",
    ManagerFirstName,ManagerLastName,ManagerAge,managerPhone);
    
    
    return 0;
}

