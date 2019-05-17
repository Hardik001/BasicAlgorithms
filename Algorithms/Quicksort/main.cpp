 #include <iostream>
 #include<stdio.h>

using namespace std;


int partition(int*a,int low,int high){
    int pivot=a[high];
    int i=low-1;
    int j;
    for(j=low;j<high;j++){
        if(a[j]<=pivot){
            i++;
            swap(a[i],a[j]);
        }

    }
     swap(a[i+1],a[high]);
        return i+1;
}
void quicksort(int *a,int low,int high){
    if(low<high){
        int pi=partition(a,low,high);
        quicksort(a,low,pi-1);
        quicksort(a,pi+1,high);
    }

}

int main()
{
     int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    quicksort(arr, 0, n-1);
    printf("Sorted array: n");
    int i;
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }

    return 0;
}
