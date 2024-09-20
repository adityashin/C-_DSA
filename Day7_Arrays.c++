#include <iostream>
using namespace std;

int main()
{
    {

    double price[11];

    int size = sizeof(price);

    for (int j = 0; j <= size; j++)
    {
        cin >> price[j];
    }
    for (int i = 0; i <= 10; i++)
    {
        cout << price[i] << endl;
    }

    }

    //find smallest and largest in array
    {
        int numbers[] = {11,34,5,63,3,6,7,8,5,3,333,1,-99};
        int size = 14;
        int sno;
        int indexoff;

        for(int i=0;i<=size;i++){
            if(sno>numbers[i]) //If sno is greater than any number then it will reject it and only accept those numbers which are smaller than it;
            {
                sno = min(numbers[i],sno);  
                indexoff = i; //homework
                //find the index of number;
                // 🧐 note
            }
        }
        cout<<"Smallest number in series is "<<sno<<endl;
        cout<<"Index of sno is "<<indexoff<<endl;

        
       
    }
    return 0;
}
