#include <iostream>
using namespace std;
void mergesort(int arr[], int ans[], int mid, int low, int high)
{
    int i, j, k;
    i = low;
    j = mid + 1;
    k = low;
    while (i < mid && j < high)
    {
        if (arr[i] < arr[j])
        {
            ans[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            ans[k] = arr[j];
            j++;
            k++;
        }
    }
    while (i < mid)
    {
        ans[k] = arr[i];
        i++;
        k++;
    }
    while(j<high){
        ans[k]=arr[j];
        j++;
        k++;

    }
    cout<<"The sorted array:"<<endl;
    for(int i=0;i<high;i++){
        cout<<ans[i]<<" ";
    }
}

int main()
{
    int n;
    cout << "Enter the lenght of the array" << endl;
    cin >> n;
    int arr[n];
    int ans[n];
    cout<<"Enter the elements of array:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        ans[i] = 0;
    }
    int low = 0;
    int high = n;
    int mid = low+(high-low)/2;
    mergesort(arr,ans,mid,low,high);

    return 0;
}
//to be contd...