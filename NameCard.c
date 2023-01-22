#include "NameCard.h"
#include <stdio.h>
#include <string.h>


// NameCard struct var memory allocation and init and return value
NameCard * MakeNameCard(char * name, char * phone)
{
    NameCard * temp_namecard = (NameCard*)malloc(sizeof(NameCard));
    
    memcpy(temp_namecard->name, name, NAME_LEN);
    memcpy(temp_namecard->phone, phone, PHONE_LEN);

    return temp_namecard;
}

// NameCard struct var print content
void ShowNameCardInfo(NameCard * pcard)
{
    printf("name : %s\r\n", pcard->name);
    printf("phone : %s\r\n", pcard->phone);
}

// same name return 0, different name return -1
int NameCompare(NameCard * pcard, char * name)
{
    return strcmp(pcard->name, name);
}

// phone number edit
void ChangePhoneNum(NameCard * pcard, char * phone)
{
    memcpy(pcard->phone, phone, PHONE_LEN);
}