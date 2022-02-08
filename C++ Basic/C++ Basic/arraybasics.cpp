#include <iostream>
#include "arraybasics.h"
using std::cout;
using std::endl;

//user Opeartions to Perform

void showOpeartions()
{
	cout << "Enter what opeartion you need to perform using yr data"
		<< "\n1.Reverse the Array\n2.Find largest number\n3.Find smallest number\n4.Find even numbers\n5.Find Odd numbers\n"
		<< "6.Sort the given array\n7.Find sum of array"
		<< endl;
}

//reverse the array

int* reverseArray(int* array, int size)
{
	for (int i = size - 1,j=0; i >(size/2) && j<size; i--, j++)
	{
		int temp = array[j];
		array[j] = array[i];
		array[i] = temp;
	}
	return array;
}

//find sum of array 

int sumOfArray(int* array, int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		//sum += array[i];
		sum+=*(array+i);
	}
	return sum;
}

// find the largest number in the array 

int findMaxNumber(int* array, int size)
{
	int maxNum = array[0];
	for (int i = 0; i < size; i++)
	{
		if (maxNum < array[i])
		{
			maxNum = array[i];
		}
	}
	return maxNum;
}

//find smallest number in the array

int findMinNumber(int* array, int size)
{
	int minNum = array[0];
	for (int i = 0; i < size; i++)
	{
		if (array[i] < minNum)
		{
			minNum = array[i];
		}
	}
	return minNum;
}

// find even numbers in the given array
void evenNumbersInArray(int* array, int size)
{
	int* evenNum, count = 0,i;
	evenNum = new int[size];
	for (i=0;i<size;i++)
	{
		if (array[i] % 2 == 0)
		{
			evenNum[count] = array[i];
			count++;
		}
	}
	if (count == 0)
	{
		cout << "Sorry in the given array there is no even numbers present" << endl;
	}
	else
	{
		for (i = 0; i < count; i++)
		{
			cout << evenNum[i] << "\t";
		}
		cout << endl;
	}
	delete[] evenNum;
}

// find odd numbers in the given array
void oddNumbersInArray(int* array, int size)
{
	int* oddNum, count = 0, i;
	oddNum = new int[size];
	for (i = 0; i < size; i++)
	{
		if (array[i] % 2 != 0)
		{
			oddNum[count] = array[i];
			count++;
		}
	}
	if (count == 0)
	{
		cout << "Sorry in the given array there is no even numbers present" << endl;
	}
	else
	{
		for (i = 0; i < count; i++)
		{
			cout << oddNum[i] << "\t";
		}
		cout << endl;
	}
	delete[] oddNum;
}

//sorting the given array into ascending order
int* ascendingOrder(int* array, int size)
{
	for (int i = 0; i < size ; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (array[i] > array[j])
			{
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
	return array;
}
//sorting the given array into descending order
/*
int* descendingOrder(int* array, int size)
{
	for (int i = 0; i < size ; i++)
	{
		for (int j = i + 1; i < size; j++)
		{
			if (array[i] < array[j])
			{
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
	return array;
}*/