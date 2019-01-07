/***** Includes *****/
#include<math.h>
#include<stdio.h>
#include<stdlib.h>

/***** Type definitions *****/
typedef struct item ITEM;
typedef struct item_list* NODE;

struct item{
	int id;
	int num;
};

struct item_list{
	ITEM it;
	NODE next;
};

/***** Function prototypes *****/
void print(NODE);
void duplicateItems(NODE);

/***** Implementations *****/
int main(){

	int number1 = 0;	//to store the decimal number represented by link list 1
	int number2 = 0;	//to store the decimal number represented by link list 2

	//variable declaration
	NODE n1, n2, n3, n4;
	NODE x1;


	/*************** FIRST TEST CASE WITH FOUR NODES ************/
	n1 = (NODE)malloc(sizeof(struct item_list));
	n2 = (NODE)malloc(sizeof(struct item_list));
	n3 = (NODE)malloc(sizeof(struct item_list));
	n4 = (NODE)malloc(sizeof(struct item_list));

	/*************** Initializing the nodes ************************/
	n1->it.id = 100;
	n1->it.num = 1;
	n1->next = n2;

	n2->it.id = 101;
	n2->it.num = 2;
	n2->next = n3;

	n3->it.id = 102;
	n3->it.num = 3;
	n3->next = n4;

	n4->it.id = 103;
	n4->it.num = 4;
	n4->next = NULL;

	/*************** SECOND TEST CASE WITH FOUR NODES ************/
	x1 = (NODE)malloc(sizeof(struct item_list));

	/*************** Initializing the nodes ************************/
	x1->it.id = 201;
	x1->it.num = 5;
	x1->next = NULL;

	/*************** printing the list to be extended *************/
	printf("\nPrinting the first list with four nodes\n");
	print(n1);

	printf("\nPrinting the second list with one node\n");
	print(x1);

	/*************** calling duplicateItems fuction ***************/
	duplicateItems(x1);
	duplicateItems(n1);

	printf("\n\n*************************************************\n\n");

	printf("Printing the first extended list\n\n");
	print(n1);

	printf("\n\nPrinting the second extended list\n\n");
	print(x1);
}

/***** helper function to print the linked list *****/
void print(NODE head){
	NODE t;
	t = head;
	while(t!=NULL){
		printf("|ID = %d|->",t->it.id);
		t = t->next;
	}
	printf("X\n\n");
}

/***** Function implemented by the students *****/

void duplicateItems(NODE Head)
{
/* Write body of this function. Upload this function on portal in corresponding textbox*/
	NODE temp = Head;

        while(temp->next!=NULL)
        {

                /*NODE dup = (NODE)malloc(sizeof(NODE));

                dup->it.id = temp->it.id;
                dup->it.num = temp->it.num;
                dup->next = temp->next;

                temp->next = dup;
                temp = dup->next;*/

                temp = temp->next;
        }

                NODE dup = (NODE)malloc(sizeof(NODE));

                dup->it.id = temp->it.id;
                dup->it.num = temp->it.num;
                dup->next = NULL;

                temp->next = dup;
}

int computeVal(NODE Head)
{
/* Write body of this function. Upload this function on portal in corresponding textbox*/
	int sum = 0, rev=0;
        NODE temp = Head;

        while(temp!=NULL)
        {
                sum = (temp->it.num) + sum*10;
                temp = temp->next;
        }

        while(sum>0)
        {
                rev = rev*10 + (sum%10);
                sum = sum/10;
        }

        return rev;
}
