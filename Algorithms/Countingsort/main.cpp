#include <iostream>

using namespace std;

int main()
{
    cout << "enter the number of elements in array" << endl;
    int n;
    cin>>n;
    int a[n];
    int i,j;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int max=a[0];
    for(i=1;i<n;i++){
        if(max<a[i])
            max=a[i];
    }
    int c[max+1];
    for(i=0;i<=max;i++)
        c[i]=0;
    for(i=0;i<n;i++)
        c[a[i]]++;
    for(i=1;i<=max;i++)
        c[i]=c[i-1]+c[i];
    int b[n];
    for(i=0;i<n;i++){
        b[c[a[i]]-1]=a[i]; //because the indexing starts from zero
        c[a[i]]--;
    }
    for(i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
    return 0;
}
