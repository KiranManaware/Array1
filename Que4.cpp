// Given an array, predict if the array contains duplicates or not.
#include<iostream>
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
    bool flag = false;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                flag = true;
                cout<<"Duplicate value is  : "<< a[i];
                break;
            }
        }
    }
    if(flag == false)
    cout<<"No duplicate value found ";

    return 0;
}