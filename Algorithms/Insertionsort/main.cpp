#include <iostream>

using namespace std;

int main()
{
    cout << "enter the number of elements in array" << endl;
    int n;
    cin>>n;
    int arr[n];
    int i,j;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    for(j=1;j<n;j++){
        key=arr[j];
        i=j-1;
        while(i>-1&&key<arr[i]){
            arr[i+1]=arr[i];
            i--;
        }
        arr[i+1]=key;
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
