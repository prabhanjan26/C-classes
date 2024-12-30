#include <iostream>
using namespace std;
void insertionSort(int arr[], int n) {
    
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
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
    insertionSort(arr,n);
    
    
    return 0;
}
/*
>Total pass = n-1;
>Totla swaps/comp = n(n-1)/2;
>Time complexity = O(n^2);{worst}
>Time Complexity = O(N);{Best}{Total comp = n-1};
>Stable;
>Adaptive;


*/
