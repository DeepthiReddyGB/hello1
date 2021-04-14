
#ifndef FOO_DOT_H    /* This is an "include guard" */
#define FOO_DOT_H    /* prevents the file from being included twice. */
                     /* Including a header file twice causes all kinds */
                     /* of interesting problems.*/

/**
 * This is a function declaration.
 * It tells the compiler that the function exists somewhere.
 */

typedef struct node
{
int info,year;
char name[50],colour[50];
struct node *next;
}nodetype;
nodetype* insert(nodetype*);

void sort(nodetype*);
void desd(nodetype*);
void sortyear(nodetype*);
void sortname(nodetype*);
void sortcolour(nodetype*);
#endif /* FOO_DOT_H */