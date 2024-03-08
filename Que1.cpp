//Calculate the product of all the elements in the given array.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter element of arrar"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int product =1;
    for(int i=0;i<n;i++){
        product*=arr[i];
    }
    cout<<"Product  = "<<product;
    return 0;
}