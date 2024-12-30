#include <iostream>
using namespace std;
void bubblesort(int arr[] ,int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubblesort(arr,n);

    return 0;
}
/*
Totla NO. of pass = n-1;
Totla NO. of Comparisions = n(n-1)/2;
Time Complexity = O(n^2);
By default it is not addaptive,but it can be made addaptive;
Its stable;
Lighter--->
<---Heavier;


*/
