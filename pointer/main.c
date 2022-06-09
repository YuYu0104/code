#include <stdio.h>
#include <stdlib.h>
int* size(int *y,int *x);
int main()
{
    int a=10;
    int b=20;
    int *arr;
    arr=size(&a,&b);
    printf("%d\n",*arr);
    printf("%d\n",sizeof(b));


    getch();
    return 0;
}
int* size(int *y,int *x){
    if(*y>*x){
        printf("%d\n",y);
        return y;
    }else{
        printf("%d\n",x);
        return x;
    }
}
