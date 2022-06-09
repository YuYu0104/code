#include <iostream>
#include <cmath>

using namespace std;
void binarysearch(int arry[],int size){
    int i=0;
    int j=0;
    int temp=0;
    for(i=1;i<size;i++){
            j=i;

                while(j>0 && arry[j-1]>arry[j]){
                    temp=arry[j];
                    arry[j]=arry[j-1];
                    arry[j-1]=temp;
                    j--;
                }


}
for(i=0;i<size;i++){
    printf("%d",arry[i]);
}
}


int main()
{
    int nums[]={19,17,18,15,16,14,13,11,12};

    int arrsize=sizeof(nums)/sizeof(nums[0]);

   binarysearch(nums,arrsize);

    return 0;
}
