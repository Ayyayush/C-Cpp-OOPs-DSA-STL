#include <iostream>
using namespace std;
class Matrix
{
    private:
        int A[3][3];
    public:
        void inputMatrix()
        {
            cout<<"Enter 9 numbers for Matrix: ";
            for(int i=0;i<=2;i++)
                for(int j=0;j<=2;j++)
                    cin>>A[i][j];
        }
        void printMatrix()
        {
            cout<<endl;
            for(int i=0;i<=2;i++)
            {
                for(int j=0;j<=2;j++)
                    cout<<A[i][j]<<" ";
                cout<<endl;

            }
        }
                                            // 2 matrix objects ko add krna h 
        Matrix operator+(Matrix M)          // return matrix type ki value krate h
        {
            Matrix temp;                         // temp ke andar A[i][j] mein values rakhni hongi toh loop lagao
            for(int i=0;i<=2;i++)
                for(int j=0;j<=2;j++)
                    temp.A[i][j]=A[i][j]+M.A[i][j];       // local function ke temp ke A[i][j] mein object ke corresponding A[i][j] add ho jayega
            return temp;
        }
        Matrix operator-(Matrix M)
        {
            Matrix temp;                      // temp ke andar A[i][j] mein values rakhni hongi toh loop lagao
            for(int i=0;i<=2;i++)
                for(int j=0;j<=2;j++)
                    temp.A[i][j]=A[i][j]-M.A[i][j];
            return temp;
        }
        Matrix operator*(Matrix M)
        {
            Matrix temp;
            int sum,k;
            for(int i=0;i<=2;i++)
                for(int j=0;j<=2;j++){
                    for(k=0,sum=0;k<=2;k++)
                        sum+=A[i][k]*M.A[k][j];
                    temp.A[i][j]=sum;
                }
            return temp;
        }
};
int main()
{
    Matrix A,B,C;
    A.inputMatrix();
    B.inputMatrix();
    C=A+B;
    C=A-B;
    C=A*B;
    A.printMatrix();
    B.printMatrix();
    C.printMatrix();
    cout<<endl;
    return 0;
}
