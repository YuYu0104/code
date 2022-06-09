#include <stdio.h>
#include <stdlib.h>
struct size{
    char name[20];
    int id;
    int age;

}student;
int main()
{


    printf("please enter your name:");
    scanf("%s",& student.name);
     printf("please enter your id:");
    scanf("%d",& student.id);
     printf("please enter your age:");
    scanf("%d",& student.age);



        printf("%s\n",student.name);
         printf("%d\n",student.id);
          printf("%d\n",student.age);



    getch();
    return 0;
}
