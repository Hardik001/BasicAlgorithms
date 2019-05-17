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
    int j,min,index=0;
    for(i=0;i<n;i++){
           min=arr[i];
           index=i;
        for(j=i+1;j<n;j++){
                if(arr[j]<min){
                    min=arr[j];
                    index=j;
                }



        }

                 swap(arr[i],arr[index]);



    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
