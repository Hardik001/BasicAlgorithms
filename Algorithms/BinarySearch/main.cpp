#include <iostream>

using namespace std;
int BS(int*a,int start,int end,int item);

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
    int ans=BS(arr,0,n-1,item);
    if(ans==-1)
        cout<<"item "<<item<<" not found";
    else
        cout<<"item "<<item<<" found at "<<ans;
    return 0;
}

int BS(int*a,int start,int end,int item){
    if(start<=end){
        int mid=start+(end-start)/2;
        if(a[mid]==item)
            return mid;
        else if(a[mid]<item)
            return BS(a,mid+1,end,item);
        else
            return BS(a,start,mid-1,item);
    }
    return -1;
}
