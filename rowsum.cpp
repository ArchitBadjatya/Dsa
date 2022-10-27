/*
    Problem: Print the row wise sum in the 2D Array
    eg:
        1 4 9 = 14
        7 8 9 = 24
        3 1 2 = 6
        Output: 14, 24, 6

*/
#include <iostream>
using namespace std;

// Take input for 2D Array
void takeInput(int arr[][3], int row, int col)
{
    cout << "Enter the value of 3*3 array: ";

    // Taking input
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
}

// Traversing the 2D Array
void traverse(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

// Row wise sum
void rowWiseSum(int arr[][3], int row, int col)
{
    cout << "Row Wise sum: ";
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
        cout << sum << " ";
    }
    cout << endl;
}

int main()
{

    int arr[3][3];
    takeInput(arr, 3, 3);
    traverse(arr, 3, 3);

    // For printing row wise sum
    rowWiseSum(arr, 3, 3);

    return 0;
}