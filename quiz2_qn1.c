
/****************************************
 Implement the following three functions
 1) LINK InsertTwoNodesAfterPos(LINK start, university u1, university u2, int pos);
 2) void Sort(university * univ, int size);
 3) float Compute_Avg_Rank(LINK start);

 Please read the comments inside the functions for details regarding their purpose.
 You have to upload only the three function implementations in the appropriate boxes on uploading site.

 The following is a utility function given to you that can be used for testing.
 void print(LINK start);
 Note:
1) You have to upload only the three functions implementations in the appropriate boxes on uploading site.
2) You are not suppose to modify any of the structure and typedefinitions given in the question.
3) You can assume all user inputs (where ever applicable) are valid and correct.
 ****************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct university;

typedef enum {TIER_I, TIER_II, TIER_III} tier_type;

typedef struct {
	char uname[35];
	int rank;
	tier_type tier;
} university;

struct node;
typedef struct node NODE;

typedef NODE * LINK;

struct node {
	university univ;
	LINK next;
};

/* Function Prototype Declarations */
LINK InsertTwoNodesAfterPos(LINK start, university u1, university u2, int pos);
void Sort(university * univ, int size);
float Compute_Avg_Rank(LINK start);

LINK InsertTwoNodesAfterPos(LINK start, university u1, university u2, int pos)
{
    /*  This function inserts two new nodes in the list whose first node is pointed by start in such a way that AFTER INSERTION the new nodes corresponding to university u1 and u2 are at positions pos+1 and pos+2 respectively.  Finally the function should return the address of the first node of the modified list. However if the nodes cannot be inserted at specified position, it should simply return the unmodified list. You can assume that pos is always a nonnegative integer. [Example: If the list has 5 nodes and pos is 5, the new nodes will be inserted at positions 6 and 7. If the list has 8 items and pos has a value of 10, the two nodes cannot be inserted.]  MAX_MARKS 30      This function will have some partial marking. */

    puts("INSERTION OUTPUT : ");
	int size = 0, count = 0;

    NODE* node1 = (NODE*) malloc(sizeof(NODE));
    NODE* node2 = (NODE*) malloc(sizeof(NODE));

   	node1->univ = u1;
   	node2->univ = u2;

   	node1->next = node2;
   	node2->next = NULL;

   	NODE* temp = start;


   	while(temp!=NULL)
   	{
   		size++;
   		temp = temp->next;
   	}
   	printf("size = %d\n", size);


   	if(pos>size || pos<0)
    {
        printf("The link cannot be modified at the given pos = %d\n", pos);
        return start;
    }

    //NODE* temp1 = NULL;
    temp = start;
   	while(temp!=NULL && count<=size)
   	{
   		count++;

   		if(count == pos)
   		{
   			node2->next = temp->next;
   			temp->next = node1;
   			//temp = temp->next;

   			printf("inserted at pos %d and count %d\n", pos, count);
   			return start;
   		}
   		temp = temp->next;
   	}

}

void Sort(university * univ, int size)
{
    /* This function takes array of type university and size (number of university)  as input arguments.
     The function sorts the array based on the tier_type, in the order: TIER_I, followed by TIER_II and then followed by TIER_III.  MAX_MARKS 12.5 This function has binary grading (either 0 or 12.5M) */

    puts("\nSORTING OUTPUT :\n");
	university* sort = (university*) calloc(size, sizeof(university));

	int ctr = 0, i=0;

	for(i=0 ; i<size ; i++)
	{
		if((univ+i)->tier == TIER_I)
		{
		    //puts("in 1");
			*(sort+ctr) = *(univ+i);
			ctr++;
		}
	}

	for(i=0 ; i<size ; i++)
	{
		if((univ+i)->tier == TIER_II)
		{
		    //puts("in 2");
			*(sort+ctr) = *(univ+i);
			ctr++;
		}
	}

	for(i=0 ; i<size ; i++)
	{
		if((univ+i)->tier == TIER_III)
		{
		    //puts("in 3");
			*(sort+ctr) = *(univ+i);
			ctr++;
		}
	}

	univ = sort ;
	for(i=0 ; i<size ; i++)
	{
	    printf("%s : %d\n",(univ+i)->uname , (univ+i)->tier);
	}
}


float Compute_Avg_Rank(LINK start)
{
    /* This function takes a pointer to first NODE of the linked list as an argument.  The function computes and returns the average rank of TIER_I universities. Assume there is at_least one TIER_I university in the linked list.
MAX_MARKS 10  This function has binary grading (0 or 10). */

    int size = 0;
    float sum = 0, avg=0;
	NODE* temp = start;

    while(temp!=NULL)
    {
        size++;
        sum += temp->univ.rank;
        temp = temp->next;
    }

    avg = sum/size;

    puts("\nAVERAGE OUTPUT :");
    printf("\nAvg rank = %0.3f", avg);
}

/* This is just a utility function that you can use for testing */
void print(LINK start)
{
    puts("\nPRINT OUTPUT : ");
    int size = 0;
    LINK temp = start;
    while(temp!= NULL)
    {
        printf("%s\n", temp->univ.uname);
        temp=temp->next;
    }

    temp = start;
    while(temp!=NULL)
   	{
   		size++;
   		temp = temp->next;
 	}

 	printf("size = %d\n", size);
}

int main(void) {
    /* You can test your implementations from here*/

    //UNIVERSITY 3
    university u3;
    strcpy(u3.uname , "u3");
    u3.rank = 8;
    u3.tier = TIER_II;

    //UNIVERSITY 4
    university u4;
    strcpy(u4.uname , "u4");
    u4.rank = 10;
    u4.tier = TIER_I;

    //UNIVERSITY 1
    university u1;
    strcpy(u1.uname , "u1");
    u1.rank = 20;
    u1.tier = TIER_II;

    //UNIVERSITY 2
    university u2;
    strcpy(u2.uname , "u2");
    u2.rank = 0;
    u2.tier = TIER_III;

    //NODE 4
    NODE* node4 = (NODE*) malloc(sizeof(NODE));
    node4->univ = u4;
    node4->next = NULL;

    //NODE 3
    NODE* node3 = (NODE*) malloc(sizeof(NODE));
    node3->univ = u3;
    node3->next = node4;

    LINK start = node3;

    //TEST INSERTION
    int pos = 1;
    start = InsertTwoNodesAfterPos(start, u1, u2, pos);
    print(start);

    //TEST SORTING
    university* univ = (university*) calloc(4, sizeof(university));;
    int size = 4;
    *(univ + 0) = u1;
    *(univ + 1) = u2;
    *(univ + 2) = u3;
    *(univ + 3) = u4;
    Sort(univ, size);

    //TESTING AVERAGE RANK
    Compute_Avg_Rank(start);

    return 0;
}
