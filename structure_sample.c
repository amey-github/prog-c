#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//BEHENCHOD
/*void main()
{
    struct person
    {
        char name[30];
        long long age;
    };

    struct person *p;
    p = (struct person*) malloc (sizeof (struct person));
    //p->age = 20;

 printf("%d", sizeof(p->name));
 printf("\n%d", sizeof(p->age));
 printf("\n%d", sizeof(*p));
}*/
/*void main()
{
    typedef enum {a, b=-1, c} alpha;
    alpha x=a, y=b, z=c;

    printf("%d  %d  %d", x, y, z);
}
*/

typedef struct
{
    char *name;
}stu;

void main()
{


    stu s;
    //char ch = 'a';
    s.name = "abc";

    printf("%s",(s.name));
}
