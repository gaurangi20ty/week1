#include <iostream>
using namespace std;
int main() {
    int l;
    cout<<"enter the size of array";
    cout<<endl;
    cin>>l;
    int arr[l];
    cout<< "enter array";
    cout<<endl;
    for(int i=0;i<l;i++)
    {
        cin>>arr[i];
    }
for(int i=0;i<l;i++)
    {
        cout<<arr[i]; cout<<" ";

    }
     cout<<endl;

    int sum=0,avg;
    for(int i=0;i<l;i++)
    {
        sum=sum+arr[i];
    }
    avg=(sum)/l;
    cout<<"average is " <<avg;

    return 0;
}
