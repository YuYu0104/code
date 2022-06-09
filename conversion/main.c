#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int binary;
    int remain=0;
    int decimal=0;
    int length=0;
    int i=1;
    char hexa[20];
    int x=0;
    int y=0;
    int remainder[20];

    printf("please enter hexa number : ");
    gets(hexa);
    for(length=0;hexa[length]!='\0';++length);
    for(i=0;hexa[i]!='\0';i++,--length){
            if(hexa[i]>='0' && hexa[i]<='9'){
                decimal+=(hexa[i]-'0')*pow(16,length-1);
            }else if(hexa[i]>='A' && hexa[i]<='F'){
                decimal+=(hexa[i]-55)*pow(16,length-1);
            }else if(hexa[i]>='a' && hexa[i]<='f'){
                decimal+=(hexa[i]-'87')*pow(16,length-1);
            }

            }
            printf("This is decimal number :%d\n",decimal);
            while(decimal!=0){
                remainder[x]=decimal%2;
                decimal=decimal/2;
                x++;
            }
            for(y=x-1;y>=0;y--){
                printf("%d",remainder[y]);
            }



    getch();
    return 0;
}
