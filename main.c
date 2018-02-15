#include <stdio.h>
#include <limits.h>

#define BUFR 50;
#define NAME ^\w*$;

struct person
{
    char fname[BUFR];
    char lname[BUFR];
} ;
typedef struct person Person;


int main() {

    Person aPerson = {0};

    printf("Hello, World!\n");
    return 0;
}