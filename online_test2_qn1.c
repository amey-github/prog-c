#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char course; //either A or B
    int marks[3]; //quiz , midsem , compre
} subject;

typedef struct
{
    int roll_no;
    subject sub[2];
    struct NODE* next;
}NODE;

typedef NODE* LINK;
LINK union_list(LINK list3, LINK list1, LINK list2);

void main()
{
    LINK list1, list2;
    NODE A1, A2, A3, B1, B2, B3;

    int i, j;
    for(i=0 ; i,3 ;i++)
    {
        for(j=0 ; j<2 ; j++)
        {
            A3.sub[0].marks[i] = 0;
            A3.sub[0].marks[i] = 0;
            A3.sub[0].marks[i] = 0;

            B1.sub[0].marks[i] = 0;
            B2.sub[0].marks[i] = 0;
            B3.sub[0].marks[i] = 0;
        }
    }

    A3.sub[0].course = A2.sub[0].course = A1.sub[0].course = 'A';
    B3.sub[1].course = B2.sub[1].course = B1.sub[1].course = 'B';

    A1.roll_no = B3.roll_no = 1;
    A3.roll_no = B1.roll_no = 3;
    A2.roll_no = 2;
    B2.roll_no = 4;


    A1.sub[0].marks[2] = 20;
    A2.sub[0].marks[2] = 40;
    A3.sub[0].marks[2] = 43;

    B1.sub[1].marks[2] = 41;
    B2.sub[1].marks[2] = 42;
    B3.sub[1].marks[2] = 65;

    list1 = &A1;
    A1.next = &A1;
    A2.next = &A3;
    A3.next = NULL;


    list1 = &B1;
    B1.next = &B1;
    B2.next = &B3;
    B3.next = NULL;

    LINK list3 = &A1;
    list3 = union_list(list3, list1, list2);
}

LINK union_list(LINK list3, LINK list1, LINK list2)
{
    LINK temp1 = list1, temp2 = list2, temp3 = list3;
    int i=0, ctr = 0, j=0;

    while(temp1!=NULL)
    {
        while(temp2!=NULL)
        {
            if(temp1->roll_no == temp2->roll_no)
            {
                ctr = -1;
                puts("in equal");

                for(i=0 ; i<3 ; i++)
                    temp1->sub[1].marks[i] = temp2->sub[1].marks[i];

                NODE* node = (NODE*)malloc(sizeof(NODE));

                node->roll_no = temp1->roll_no;
                for(j=0; j<2 ;j++)
                {
                    node->sub[j] = temp1->sub[j];
                }
                temp3 = node;
                temp3 = temp3->next;
            }
        }

        if(ctr==0)
        {
        }
    }

    temp3->next = NULL;

    temp3 = list3;

    while(temp3!=NULL)
    {
        printf("%d\n : ", temp3->roll_no);
        temp3 = temp3->next;
    }
}
