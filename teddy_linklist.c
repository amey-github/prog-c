#include <stdio.h>
#include <stdlib.h>

#define showcase_size 10

int count = 0;
typedef enum {PINK=5 , BROWN , WHITE} color;

typedef struct
{
    int bear_id;
    float bear_cost;
    color bear_color;
} teddy_bear;

typedef struct
{
    teddy_bear tb;
    struct NODE *next;
}NODE;

typedef struct NODE* LINK;

typedef struct
{
    struct NODE* first;
    int size;
}LIST;

LIST init_list(LIST ls);

teddy_bear user_input(teddy_bear ted);

void display(teddy_bear ted);

NODE create_node(NODE node, teddy_bear ted, LIST* ptr);

void main()
{
    LIST list = init_list(list);
    LIST* ptr = &list;

    /*printf("%d", list.size);
    printf("\n%x", list.first);*/

    teddy_bear ted = user_input(ted);
    NODE n1 = create_node(n1, ted, ptr);
    display(ted);

    ted = user_input(ted);
    NODE n2 = create_node(n2, ted, ptr);
    display(ted);
    n2.next = &n1;

    ted = user_input(ted);
    NODE n3 = create_node(n3, ted, ptr);
    display(ted);
    n3.next = &n2;

    print_list(list);
}

LIST init_list(LIST ls)
{
    ls.first = NULL;
    ls.size = 0;

    return ls;
}

teddy_bear user_input(teddy_bear ted)
{
    count++;

    printf("id = ");
    scanf("%d", &ted.bear_id);

    printf("cost = ");
    scanf("%f", &ted.bear_cost);

    printf("color = ");
    scanf("%d", &ted.bear_color);

    puts("\n\n");

    return ted;
}

void display(teddy_bear ted)
{
    printf("TEDDY %d :\n", count);
    printf("id = %d", ted.bear_id);
    printf("\ncost = %0.2f", ted.bear_cost);
    printf("\ncolor = %d", ted.bear_color);

    puts("\n\n");
}

NODE create_node(NODE node, teddy_bear ted, LIST* ptr)
{
    ptr->first = &node;
    node.tb = ted;
    node.next = NULL;

    return node;
}
