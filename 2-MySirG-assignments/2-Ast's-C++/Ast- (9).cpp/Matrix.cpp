#include <iostream>
using namespace std;

class Matrix
{
    int A[3][3];

public:
    void input()        // 3x3 matrix input
    {
        cout << "Enter 9 matrix elements row-wise:" << endl;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
                cin >> A[i][j];    // input le rahe hain
        }
    }

    void display()      // 3x3 matrix display
    {
        cout << "Matrix is:" << endl;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
                cout << A[i][j] << " ";    // matrix ka element print
            cout << endl;
        }
    }

    Matrix add(Matrix M)        // matrix addition
    {
        Matrix temp;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
                temp.A[i][j] = A[i][j] + M.A[i][j];
        }
        return temp;
    }

    Matrix sub(Matrix M)        // matrix subtraction
    {
        Matrix temp;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
                temp.A[i][j] = A[i][j] - M.A[i][j];
        }
        return temp;
    }

    Matrix mult(Matrix M)        // matrix multiplication
    {
        Matrix temp;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                temp.A[i][j] = 0;
                for (int k = 0; k < 3; k++)
                    temp.A[i][j] += A[i][k] * M.A[k][j];
            }
        }
        return temp;
    }

    Matrix trans()        // matrix transpose
    {
        Matrix temp;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
                temp.A[i][j] = A[j][i];    // row <-> col swap
        }
        return temp;
    }

    bool is_singular()        // singular check using determinant
    {
        int det = A[0][0]*(A[1][1]*A[2][2] - A[1][2]*A[2][1])
                - A[0][1]*(A[1][0]*A[2][2] - A[1][2]*A[2][0])
                + A[0][2]*(A[1][0]*A[2][1] - A[1][1]*A[2][0]);

        return (det == 0);     // agar determinant 0 hai, toh singular
    }
};

int main()
{
    Matrix M1, M2, Result;

    M1.input();
    M2.input();

    cout << "\nMatrix M1:\n";
    M1.display();

    cout << "\nMatrix M2:\n";
    M2.display();

    Result = M1.add(M2);
    cout << "\nAddition of matrices:\n";
    Result.display();

    Result = M1.sub(M2);
    cout << "\nSubtraction of matrices:\n";
    Result.display();

    Result = M1.mult(M2);
    cout << "\nMultiplication of matrices:\n";
    Result.display();

    Result = M1.trans();
    cout << "\nTranspose of Matrix M1:\n";
    Result.display();

    if (M1.is_singular())
        cout << "\nMatrix M1 is Singular.\n";
    else
        cout << "\nMatrix M1 is Non-Singular.\n";

    return 0;
}
