#include <iostream>
using namespace std;

int main()
{
    int n = 4;

    for (int i = 0; i <= n; i++)
    { // outer loop
        for (int j = 0; j <= n; j++)
        { // inner loop
            cout << "*" << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = 0; j < n; j++)
        {
            cout << ch << " ";
            ch = ch + 1;
        }
        cout << endl;
    }

    {
        int n = 3;
        int no = 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << no << " ";
                no = no + 1;
            }
            cout << endl;
        }
    }

    { // Homework
        // print a to i
        char ch = 'A';
        int no = 3;
        for (int i = 0; i < no; i++)
        {
            for (int j = 0; j < n; j++)
            {

                cout << ch << " ";
                ch = ch + 1;
            }

            cout << endl;
        }
    }

    // Print Right Triangle
    {
        int no = 50;
        for (int i = 0; i <= no; i++)
        { // outer
            for (int j = 0; j < i + 1; j++)
            { // inner
                cout << "*";
            }
            cout << endl;
        }
    }

    //print 5 lines with same number
    {
        int no=5;
        for(int i=1;i<=no;i++){
            for(int j=1;j<=i;i++){
                
            }
        }
    }
    return 0;
}
