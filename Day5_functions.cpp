#include <iostream>
using namespace std;

// sum of 2 nos
int sum(int a, int b)
{
    cout << a + b << endl;
}

//minimum between 2 nos
int minumum_of_2nos(int a, int b)
{
    a > b ? cout << "A is greater"<<endl : cout << "B is greater"<<endl;
}

//calculate sum of nos from 1 to n
int sumtoN(int no){
    int sum=0;
    for(int i=0;i<=no;i++)
    sum += i;
    cout<<"sum of numbers is "<<sum<<endl;
}

//caluclate factorial of number
int Factorial(int no){
    int fact=1;
    for(int i=1;i<=no;i++)
    {
        fact *= i;
     cout<<"Factorial of "<<no<<" is "<<fact<<endl;
    }
     return 0;
}

//check number is pos or neg
int posneg(int no){
    no > 0 ? cout<<"Positve"<<endl:cout<<"negative"<<endl;
}

int main()
{
    sum(10, 10);

    minumum_of_2nos(10, 20);

    sumtoN(100);
    sumtoN(1000);

    Factorial(4);

    posneg(-3);
    
    return 0;
}