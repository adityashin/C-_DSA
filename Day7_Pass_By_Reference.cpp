#include<iostream>
using namespace std;
  void ChangeArray(int arr[],int size) {
        cout<<"Changes in main function";
        for(int i=0;i<=size;++i){
            arr[i] *= 2 ;
            cout<<endl<<arr[i]<<endl;
        }
        cout<<"========================";
    }
int main()
{
  cout<<"Original array"<<endl;
  int array[]={1,2,3};
  for(int j=0;j<=2;++j){
    cout<<array[j]<<endl;
  }
  cout<<endl<<array<<endl;
  ChangeArray(array,2);
  for(int i=0;i<=2;++i){
    array[i]*=2;
    cout<<endl<<array[i]<<endl;
  }
  cout<<"==========================";
  return 0;

  
}