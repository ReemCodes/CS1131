#include <iostream>
using namespace std;

int sum(int num[], int size)
{
    if (size <= 0)
        return 0;
    else
        return sum(num, size-1) + num[size-1];
        
}

int main()
{
    int num[]={2,2,2};
    int size = sizeof(num)/sizeof(num[0]);
    cout<<"sum = "<<sum(num, size)<<endl;
    return 0;
}
