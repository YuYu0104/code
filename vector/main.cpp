#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int>par;
    for(int i=0;i<10;i++){
    par.push_back(i);
    }
    cout<<par.size();
    printf("\n");
    par.pop_back();

    cout<<par.size();
    printf("\n");
    par.resize(5);
     cout<<par.size();

    return 0;
}
