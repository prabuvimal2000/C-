/* Program for Gauss Jordon Method.
 @author Prabu M
 @since Jan 20 2022
 */
#include <iostream>
#include <iomanip>
#define size 10
int main()
{
    int row, col, noOfElements,precision;
    float matrix[size][size], answer[size], ratio;

    //Get no of elemets to find
    std::cout << "Enter the no of elements to find in a matrix:" << std::endl;
    std::cin >> noOfElements;

    //Get precision from user
    std::cout<<"Set precision : " << std::endl;
    std::cin >> precision;
    std::cout << std::setprecision(precision) << std::fixed;

    //Get data from user and stored into array
    std::cout << "Enter the coefficients of augmented matrix: " << std::endl;
    for (row = 1; row <= noOfElements; row++)
    {
        for (col = 1; col <= noOfElements + 1; col++)
        {
            std::cout << "a[" << row << "][" << col << "]= ";
            std::cin >> matrix[row][col];
        }
    }

    // obtain main diagonal matrix 
    for (row = 1; row <= noOfElements; row++)
    {
        for (col = 1; col <= noOfElements; col++)
        {
            if (row != col)
            {
                ratio = matrix[col][row] / matrix[row][row];
                for (int k = 1; k <= noOfElements + 1; k++)
                {
                    matrix[col][k] = matrix[col][k] - (ratio * matrix[row][k]);
                }
            }
        }
    }

    /*
    //final diagonal matrix view
    for (row = 1; row <= noOfElements; row++)
    {
        for (col = 1; col <= noOfElements + 1; col++)
        {
            std::cout << matrix[row][col]<<"\t";
        }
        std::cout << std::endl;
    }*/

    // find elements value from diagonal matrix
    for (row = 1; row <= noOfElements; row++)
    {
        answer[row] = matrix[row][noOfElements+ 1] / matrix[row][row];
    }

    // final result shown
    std::cout << std::endl << "result: " << std::endl;
    for (row = 1; row <= noOfElements; row++)
    {
        std::cout << "x[" << row << "] = " << answer[row] << std::endl;
    }
	return 0;
}