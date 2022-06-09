#include <stdio.h>
#include <stdlib.h>
#define MGMG 5

int main()
{
    int size[MGMG];

    for(int i=0;i<MGMG;i++){
        printf("please enter a number:");
        scanf("%d",& size[i]);
    }
    for(int i=0;i<MGMG;i++){
        if(size[0]<size[i]){
            int temp=size[0];
            size[0]=size[i];
            size[i]=temp;
        }
    }
    printf("%d",size[0]);




    getch();
    return 0;
}
