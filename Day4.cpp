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
        int no = 5;
        for (int i = 0; i <= no; i++)
        { // outer
            for (int j = 0; j < i + 1; j++)
            { // inner
                cout << "*";
            }
            cout << endl;
        }
    }

   //print from 1 in square pattern
   {
    int no=1;
    int looprun=3;
    for(int i=0;i< looprun;i++){
        for(int j=0;j< looprun;j++){
            cout<<no<<" ";
            no++;
        }
        cout<<endl;
    }
   }

   //print from A in square pattern
   {
    char ch='A';
    int loopnum = 3;
    for(int i=0;i<loopnum;i++){
        for(int j=0;j<loopnum;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
   }

   //triangle pattern
   {
    int loopnum = 5;
    for(int i=0;i<loopnum;i++){
        for(int j=0;j<i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
   }

   //triangle pattern 
   {
    int loopnum=5;
    for(int i=0;i<loopnum;i++){
        int no =1;
        for(int j=0;j<i+1;j++){
            cout<<no;  
            no++;
        }
        cout<<endl;
            }
   }



   // Decrement operator starts here
   // from here we will execute the programs of patterns using decreement 
   {
    int n=7;
    for(int i=n;i>=0;i--){
        cout<<i<<endl;
    }
   }

    //print reverse triangle 
   {
    int no=4;
    for(int i=0;i<=no;i++){
        for(int j=i+1;j>=0;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    //Floyd's Triangle patterm
    {
        int no=1;
        int loopnum = 5;
        for(int i=1;i<=loopnum;i++){
            for(int j=1;j<=i;j++){
                cout<<no<<" ";
                no++;
            }
            cout<<endl;
        }
    }
   }
    return 0;
}
