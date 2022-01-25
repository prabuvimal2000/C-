#include <iostream>
class Vehicle
{
public :
	Vehicle()
	{
		std::cout << " Vehicle world " << std::endl;
	}
};
class Car : public Vehicle
{
	int vehicleWheels;
public:
	Car()
	{
		std::cout<<" Car "<<std::endl;
	}
	Car(int vehicleWheels)
	{
		std::cout << "This is a " << vehicleWheels << " wheel vehicle" << std::endl;
	}
};
int main()
{
	int noOfWheels;
	std::cout <<"Enter the noof wheels in your vehicle" << std::endl;
	std::cin >> noOfWheels;
	Car car(noOfWheels);
	return 0;
}