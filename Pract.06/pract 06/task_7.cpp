#include <iostream>
using namespace std;

int main(){


const int sizeOfMatrixNxN = 4;
    int matrix[sizeOfMatrixNxN][sizeOfMatrixNxN] =
        {{1, -2, 3, -4}, {5, 6}, {99}, {13, 14, 15, 16}};
       
    
    for (int i = 0; i < sizeOfMatrixNxN - 1; i++)
        for (int j = i + 1; j < sizeOfMatrixNxN; j++)
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }

    for (int i = 0; i < sizeOfMatrixNxN; i++)
    {
        for (int j = 0; j < sizeOfMatrixNxN; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }

    return 0;
}