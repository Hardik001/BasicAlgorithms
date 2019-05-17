#include <iostream>

using namespace std;

int main()
{
    cout << "enter the number of elements in array" << endl;
    int n;
    cin>>n;
    int arr[n];
    int i;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the value to be searched"<<endl;
    int item;
    cin>>item;
    for(i=0;i<n;i++){
        if(item==arr[i]){
            cout<<"the item exists in the array at index "<<i;
        }
        if(item!=arr[i]&&i==n-1)
            cout<<"item does not exist in the given array";
    }
    return 0;
}
