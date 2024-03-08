// WAP to find the smallest missing positive element in the sorted Array that contains only positive elements.
#include <iostream>
using namespace std;
int main()
{
    int a[]={-8,-2,0,1,2,4,6,8,10};
    int n = sizeof(a)/4;
    
    int x=1;
    bool flag=false;
    // for(int i=0;i<n;i++){
    //     if(a[i]!=i+1){
    //         flag=true;
    //         cout<<i+1;
    //         break;
    //     }
    // }
    for(int i=0;i<n;i++){
        if(a[i]<=0) continue;
        if(x!= a[i]){
            cout<<x;
            flag=true;
            break;
        }else x++;
    }
    if(flag==false) cout<<"There is no missing value "<<endl;
    return 0;
}