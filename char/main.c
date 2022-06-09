#include <stdio.h>
#include <stdlib.h>
#define WIN 20
int main()
{
    char oname[]="apple";
    char opass[]="pass";
    char yname[WIN];
    char ypass[WIN];
    printf("please enter your name:");
    gets( yname);
    printf("please enter your pass:");
    gets( ypass);
    if((strcmp(oname,yname))==0 && (strcmp(opass,ypass))==0){
        printf("true");
    }else{
        printf("false");
    }
    return 0;
}
