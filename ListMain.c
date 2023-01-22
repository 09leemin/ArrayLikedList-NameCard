#include <stdio.h>
#include "ArrayList.h"

int main(void)
{
    //ArrayList make and init
    List list;
    LData data;
    int sum = 0;
	int temp;
	int j;
	ListInit(&list);
    
    //save 3 people info
    LInsert(&list, MakeNameCard("Steeve", "010-1234-1234"));
    LInsert(&list, MakeNameCard("Chris", "010-4151-1225"));
    LInsert(&list, MakeNameCard("Bob", "010-7777-8888"));

    //3 NameCard print
    // ShowNameCardInfo(MakeNameCard("Steeve", "010-1234-1234"));
    // ShowNameCardInfo(MakeNameCard("Chris", "010-4151-1225"));
    // ShowNameCardInfo(MakeNameCard("Bob", "010-7777-8888"));

    //print all saved data
    printf("It's number of Data : %d \r\n", LCount(&list));

    if(LFirst(&list, &data))    // first data seek
    {
        if(!NameCompare(data, "Steeve"))
        {
            // ShowNameCardInfo(data);
            free(LRemove(&list));
            // ChangePhoneNum(data, "010-9999-9999");
            // ShowNameCardInfo(data);
        }
            
        while(LNext(&list, &data))  // second data seek.. after..
        {
            if(!NameCompare(data, "Steeve"))
            {
                // ShowNameCardInfo(data);
                free(LRemove(&list));
                // ChangePhoneNum(data, "010-9999-9999");
                // ShowNameCardInfo(data);
            }
        }
    }
    printf("\n\n");

    if(LFirst(&list, &data))
    {
        ShowNameCardInfo(data);

        while(LNext(&list, &data))
            ShowNameCardInfo(data);
    }
    printf("\n\n");


/*

    //print sum of list data(1~9)
    LFirst(&list, &sum);
    for(j=1; j<LCount(&list); j++)
    {
        LNext(&list, &temp);
		sum += temp;
    }
    printf("%d\r\n", sum);


    //data about 22 seek and delete
    if(LFirst(&list, &data))
    {
        if(((data%2) == 0) || ((data%3) == 0))
            LRemove(&list);

        while(LNext(&list, &data))
        {
            if(((data%2) == 0) || ((data%3) == 0))
            LRemove(&list);
        }
    }

    //print all saved data
    printf("It's number of Data : %d \r\n", LCount(&list));

    if(LFirst(&list, &data))
    {
        printf("%d ", data);

        while(LNext(&list, &data))
            printf("%d ", data);
    }
    printf("\n\n");
*/


    return 0;
}