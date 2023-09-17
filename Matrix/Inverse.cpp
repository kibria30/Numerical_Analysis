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

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == j)
            {
                a[i][j + n] = 1;
            }
            else
            {
                a[i][j + n] = 0;
            }
        }
    }


    // making lower and upper triangle 0 at a time
    for (i = 1; i <= n; i++)
    {
        if (a[i][i] == 0)
        {
            cout << "Mathematical Error!";
            exit(0);
        }
        for (j = 1; j <= n; j++)
        {
            if (i != j)
            {
                ratio = a[j][i] / a[i][i];
                for (k = 1; k <= 2*n; k++)
                {
                    a[j][k] = a[j][k] - ratio * a[i][k];
                }
            }
        }
    }
    
    for (i = 1; i <= n; i++)
    {
        for (j = n + 1; j <= 2 * n; j++)
        {
            a[i][j] = a[i][j] / a[i][i];
        }
    }
    cout << endl
         << "Inverse Matrix is:" << endl;
    for (i = 1; i <= n; i++)
    {
        for (j = n + 1; j <= 2 * n; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
    return (0);
}
