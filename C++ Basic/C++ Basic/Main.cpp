/* Program for perform basic opeartion in array 
* (Find min,max,sum,sortArray,reverseArray,even and odd numbers)
* @Author Prabu M
* @since 01-02-2021
*/
#include <iostream>
#include "arraybasics.h"
using std::cout;
using std::cin;
using std::endl;
int main()
{
	int* arr,size,choice;
	char decision='N';
	cout << "Enter the size of the array : " << endl;
	cin >> size;
	arr = new int[size];
	cout << "Enter the elements to store in array " << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	do
	{
		showOpeartions();
		void* arrPtr;
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << " Reversed array is : " << endl;
			/*int* arrPtr;
			arrPtr = reverseArray(arr, size);*/
			arrPtr = reverseArray(arr, size);
			for (int i = 0; i < size; i++)
			{
				//cout << *(arrPtr + i) << "\t";
				cout << *((int*)(arrPtr)+i) << "\t";
			}
			cout << endl;
			goto getChoice;
			break;
		case 2:
			cout << "Largest element in the given array : " << findMaxNumber(arr, size) << endl;
			goto getChoice;
			break;
		case 3:
			cout << "Smallest element in the given array : " << findMinNumber(arr, size) << endl;
			goto getChoice;
			break;
		case 4:
			cout << "Even numbers in the array are :" << endl;
			evenNumbersInArray(arr, size);
			goto getChoice;
			break;
		case 5:
			cout << "Odd numbers in the array are :" << endl;
			oddNumbersInArray(arr, size);
			goto getChoice;
			break;
		case 6:
			cout << "choose what kind of sort you need\n1.Ascending\n2.Descending order" << endl;
			cin >> choice;
			if (choice == 1)
			{
				cout << "Sorted array in ascending order" << endl;
				arrPtr = ascendingOrder(arr, size);
				for (int i = 0; i < size; i++)
				{
					//cout << *(arrPtr + i) << "\t";
					cout << *((int*)(arrPtr)+i) << "\t";
				}
				cout << endl;
			}
			else if (choice == 2)
			{
				cout << "Sorted array in descending order" << endl;
				arrPtr = ascendingOrder(arr, size);
				for (int i = size-1; i>=0; i--)
				{
					//cout << *(arrPtr + i) << "\t";
					cout << *((int*)(arrPtr)+i) << "\t";
				}
				cout << endl;
			}
			else
			{
				cout << "Please enter the correct choice" << endl;
			}
			goto getChoice;
			break;
		case 7:
			cout << "Sum of  the given array is : " << sumOfArray(arr, size) << endl;
			goto getChoice;
			break;
		default:
			cout << "Please enter the choice correctly"<<endl;
			goto getChoice;
		}
	getChoice:
		cout << "do you want to continue press y/n" << endl;
		cin >> decision;
		if (decision=='n' || decision=='N')
		{
			cout << "Thanks for visiting" << endl;
		}
	} while (decision == 'Y' || decision == 'y');
	delete[] arr;
	arr = NULL;
	return 0;
}