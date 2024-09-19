#include <iostream>
using namespace std;

int main()
{
    // double price[11];

    // int size = sizeof(price);

    // for (int j = 0; j <= size; j++)
    // {
    //     cin >> price[j];
    // }
    // for (int i = 0; i <= 10; i++)
    // {
    //     cout << price[i] << endl;
    // }


    //find smallest and largest in array
    {
        int numbers[] = {11,34,5,63,3,6,7,8,5,3,333,1};
        int sno ;

        for(int i=0;i<=12;i++){
            if(sno>numbers[i])
            {
                sno = numbers[i];

            }
        }
        cout<<"Smallest number in series is "<<sno<<endl;

        int bno;
        for(int j=0;j<=12;j++){
            if(numbers[j]>bno)
            {
                bno = numbers[j];
            }
        }
        cout<<"Biggest number in series is "<<bno<<endl;
    }
    return 0;
}