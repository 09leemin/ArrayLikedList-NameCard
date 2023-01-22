#define NAME_LEN    30
#define PHONE_LEN   30

typedef struct __namecard
{
    char name[NAME_LEN];
    char phone[PHONE_LEN];
} NameCard;

// NameCard struct var memory allocation and init and return value
NameCard * MakeNameCard(char * name, char * phone);

// NameCard struct var print content
void ShowNameCardInfo(NameCard * pcard);

// same name return 0, different name return -1
int NameCompare(NameCard * pcard, char * name);

// phone number edit
void ChangePhoneNum(NameCard * pcard, char * phone);
