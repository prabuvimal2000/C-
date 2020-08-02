#include <iostream>
int main()
{
 int num;
 std::cout<<"Enter the number :\n";
 std::cin>>num;
 if(num%9==0)
   std::cout<<"Digital sum is = 9\n";
 else
   std::cout<<"Digital sum is : "<<num%9<<"\n";
 return 0;
}
