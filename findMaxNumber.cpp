#include <iostream>
using namespace std;
int findMaxNumber(int num1,int num2)
{
    if(num1>num2)
    {
        return num1;
    }
    else 
    {
        return num2;
    }
}
int main() 
{
    int num1,num2,num3,num4,maxNum;
    cin>>num1>>num2>>num3>>num4;
    maxNum=findMaxNumber(num1,findMaxNumber(num2,findMaxNumber(num3, num4)));
    cout<<maxNum<<endl;
    return 0;
}
