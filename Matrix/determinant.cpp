#include <iostream>
#include <math.h>
#include <stdlib.h>

#define SIZE 10

using namespace std;

float a[SIZE][SIZE], x[SIZE];
int n;

void printMatrix(){
    cout<<"Matrix:"<<endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << a[i][j]<< "\t";
        }
        cout<<endl;
    }
}


int main()
{
    freopen("matrix_input.txt", "r", stdin);
    float ratio;
    int i, j, k;


    cout << "Enter order of matrix: ";
    cin >> n;

    cout << "Enter coefficient Matrix: " << endl;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }

    printMatrix();

    //making lower triangle 0

    for (i = 1; i <= n; i++)
    {
        if (a[i][i] == 0)
        {
            cout << "Mathematical Error!";
            exit(0);
        }
        for (j = 1; j <= n; j++)
        {
            if (j>i)
            {
                ratio = a[j][i] / a[i][i];
                for (k = 1; k <= 2*n; k++)
                {
                    a[j][k] = a[j][k] - ratio * a[i][k];
                }
            }
        }
    }
    
    printMatrix();

    float determinant = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==j) determinant *= a[i][j];
        }
    }

    cout<<"Determinat is: "<<determinant<<endl;

    // making upper triangle 0

    // for (i = 1; i <= n; i++)
    // {
    //     if (a[i][i] == 0)
    //     {
    //         cout << "Mathematical Error!";
    //         exit(0);
    //     }
    //     for (j = 1; j <= n; j++)
    //     {
    //         if (j<i)
    //         {
    //             ratio = a[j][i] / a[i][i];
    //             for (k = 1; k <= 2*n; k++)
    //             {
    //                 a[j][k] = a[j][k] - ratio * a[i][k];
    //             }
    //         }
    //     }
    // }
    // printMatrix();
    
    return (0);
}
