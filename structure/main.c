#include <stdio.h>
#include <stdlib.h>
struct size{
    char name[20];
    int age;
    int id;

}student[];
int main()
{
    for(int i=0;i<2;i++){
    printf("please enter your name:");
    scanf("%s",& student[i].name);
    printf("please enter your age:");
    scanf("%d",& student[i].age);
    printf("please enter your name:");
    scanf("%d",& student[i].id);
    }
    for(int i=0;i<2;i++){
    printf("%s",student[i].name);
    printf("%d",student[i].age);
    printf("%d",student[i].id);
    }


    getch();
    return 0;
}
