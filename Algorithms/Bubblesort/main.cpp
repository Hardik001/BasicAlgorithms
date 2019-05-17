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
     for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
                if(arr[j]>arr[j+1])
                    swap(arr[j],arr[j+1]);



        }





    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
