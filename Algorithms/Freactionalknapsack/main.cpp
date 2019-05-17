#include<bits/stdc++.h>

using namespace std;

struct Item{
    int value,weight;
    Item(int value,int weight):value(value),weight(weight){};
};

bool cmp(struct Item a,struct Item b){
    double r1=(double)a.value/a.weight;
    double r2=(double)b.value/b.weight;
    return r1>r2;
}

double fractionalknapsack(int W,struct Item arr[],int n){
    sort(arr,arr+n,cmp);
    int curwt=0;
    double finalvalue=0.0;
    int i;
    for(i=0;i<n;i++){
        if(curwt+arr[i].weight<=W){
            curwt+=arr[i].weight;
            finalvalue+=arr[i].value;
        }

        else{
            int remain=W-curwt;
            finalvalue+=arr[i].value*((double)remain/arr[i].weight);
            break;
        }

    }
    return finalvalue;

}

int main()
{
   int W = 50;   //    Weight of knapsack
    Item arr[] = {{60, 10}, {100, 20}, {120, 30}};

    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Maximum value we can obtain = "
         << fractionalknapsack(W, arr, n);
    return 0;
}