#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr=malloc(10);
    strcpy(ptr,"re");
    printf("%s\n",ptr);
    ptr=(char*)realloc(ptr,10);
    strcat(ptr,"call");
    printf("%s",ptr);






free(ptr);

    return 0;
}
