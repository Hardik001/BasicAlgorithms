#include <iostream>
#include<algorithm>
#include<vector>

using namespace std;

void bucketsort(float arr[],int n){
    vector<float>b[n];
    int i;
    for(i=0;i<n;i++){
        int bi=n*arr[i];
        b[bi].push_back(arr[i]);
    }
    for(i=0;i<n;i++){
        sort(b[i].begin(),b[i].end());
    }
    int index=0,j;
    for(i=0;i<n;i++){
        for(j=0;j<b[i].size();j++){
            arr[index++]=b[i][j];
        }
    }
}

int main()
{
     float arr[] = {0.897, 0.565, 0.656, 0.1234, 0.665, 0.3434};
    int n = sizeof(arr)/sizeof(arr[0]);
    bucketsort(arr, n);

    cout << "Sorted array is \n";
    for (int i=0; i<n; i++)
       cout << arr[i] << " ";
    return 0;
}
