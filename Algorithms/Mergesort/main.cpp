#include <iostream>

using namespace std;

void merge(int*a,int p,int q,int r){
    int n1=q-p+1;
    int n2=r-q;
    int L[n1+1];
    int R[n2+1];
    int i;
    for(i=0;i<=7;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    int j,k;
    for(i=0;i<n1;i++){
        L[i]=a[p+i];
    }
    for(j=0;j<n2;j++){
        R[j]=a[q+1+j];
    }
    L[n1]=999;
    R[n2]=999;
    i=0;
    j=0;
    for(k=p;k<=r;k++){
        if(L[i]<R[j]){
            a[k]=L[i];
            i=i+1;;
        }
        else{
            a[k]=R[j];
            j=j+1;
        }
    }
    for(i=0;i<=r;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

}
void mergesort(int*a,int p,int r){
    if(p<r){
        int q=(p+r)/2;
        mergesort(a,p,q);
        mergesort(a,q+1,r);
        merge(a,p,q,r);
    }
}

int main()
{
    int a[]={1,5,6,3,2,4,7,8};
    mergesort(a,0,7);
    int i;
    cout<<endl;
    for(i=0;i<8;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
