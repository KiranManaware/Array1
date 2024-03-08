// Find the minimum value out of all elements in the array.
#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of the array : ";
    cin>>n;
    int a[n];
    //input
    cout<<"Enter array element"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int min =INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i]<min) min=a[i];
    }
    cout<<"Minmum value is  : "<<min;
    return 0;
}