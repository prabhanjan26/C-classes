#include <iostream>
using namespace std;
void mergesort(int a[],int b[],int c[],int m,int n){
int i,j,k;
i=j=k=0;
while(i<m && j<n){
    if(a[i]<b[j]){
        c[k]=a[i];
        i++;
        k++;
    }
    else{
        c[k]=b[j];
        j++;
        k++;

    }
}
while (i<m)
{
    c[k]=a[i];
    i++;
    k++;

    
}
while(j<n){
    c[k]=b[j];
    j++;
    k++;
}
cout<<"The sorted array:"<<endl;
for(int i=0;i<m+n;i++){
    cout<<c[i]<<" ";
}


}


int main(){
    int m,n;
    cout<<"The lenght of first array:"<<endl;
    cin>>m;
    cout<<"The lenght of second array:"<<endl;
    cin>>n;
    int a[m],b[n];
    int c[m+n];
    cout<<"Enter the elements of first array:"<<endl;
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    cout<<"Enter the elements of second array:"<<endl;
    for(int j=0;j<n;j++){
        cin>>b[j];
    }
    mergesort(a,b,c,m,n);

    return 0;
}