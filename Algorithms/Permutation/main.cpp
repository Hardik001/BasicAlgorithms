#include <iostream>

using namespace std;

void swap(char*x,char*y){
    char temp;
    temp=*x;
    *x=*y;
    *y=temp;

}

void permute(char*a,int l,int r){
    int i;
    if(l==r)
        cout<<a<<endl;
    else{
        for(i=l;i<=r;i++){
            swap(a+l,a+i);
            permute(a,l+1,r);
            swap(a+l,a+i);
        }
    }
}

int main()
{
   int n;
   cout<<"enter the length of string"<<endl;
   cin>>n;
   char str[n];
   int i;
   for(i=0;i<n;i++){
    cin>>str[i];
   }
   permute(str,0,n-1);


    return 0;
}
//Time complexity is n*n!
