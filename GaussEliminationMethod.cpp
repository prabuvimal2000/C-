/* Program for Gauss Elimination Method.
 @author Prabu M
 @since Jan 20 2022
 */
#include <iostream>
#include <iomanip>
#define size 10
int main()
{
    int row, col, noOfElements, precision;
    float matrix[size][size], answer[size], ratio;

    //Get no of elemetns to find
    std::cout << "Enter the no of elements to find in a matrix" << std::endl;
    std::cin >> noOfElements;

    //Get precision from user
    std::cout << "Set precision : " << std::endl;
    std::cin >> precision;
    std::cout << std::setprecision(precision) << std::fixed;

    //Get data from user and insert into an array
    std::cout << "Enter coefficients of augmented Matrix: " << std::endl;
    for (row = 1; row <= noOfElements; row++)
    {
        for (col = 1; col <= noOfElements + 1; col++)
        {
            std::cout << "a[" << row << "][" << col << "]= ";
            std::cin >> matrix[row][col];
        }
    }

    // obtain upper triangular matrix 
    for (row = 1; row <= noOfElements; row++)
    {
        for (col = 1; col <= noOfElements; col++)
        {
            if (col > row)
            {
                ratio = matrix[col][row] / matrix[row][row];
                for (int k = 1; k <= noOfElements + 1; k++)
                {
                    matrix[col][k] = matrix[col][k] - (ratio * matrix[row][k]);
                }
            }
        }
    }

    //applied backsubstitution to find last element value in the upper triangular matrix
    answer[noOfElements] = matrix[noOfElements][noOfElements + 1] / matrix[noOfElements][noOfElements];

    //find other elements value from upper triangular matrix
    for (row = noOfElements - 1; row >= 1; row--)
    {
        answer[row] = matrix[row][noOfElements + 1];
        for (col = row + 1; col <= noOfElements; col++)
        {
            answer[row] = answer[row] - (matrix[row][col] * answer[col]);
        }
        answer[row] = answer[row] / matrix[row][row];
        /*
        //tried in another way
        int sum = 0;
        for (col=row+1;col<=noOfElements;col++)
        {
            sum = sum + matrix[row][col] * answer[col];
        }
        answer[row] = (matrix[row][noOfElements + 1]-sum) / matrix[row][row];
        */
    }

    // final result shown
    std::cout << std::endl << "result: " << std::endl;
    for (row = 1; row <= noOfElements; row++)
    {
        std::cout << "x[" << row << "] = " << answer[row] << std::endl;
    }
    return 0;
}
