#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,k=0;
	cin>>t;
	while(t--){
	    cin>>n;
	    k=0;
	    for(int i=2;i<n;i++){
	        if(n%i==0){
	            k=1;
	        }
	    }
	    if(k==1 || n==1){
	        cout<<"no"<<endl;
	    }
	    else{
	        cout<<"yes"<<endl;
	    }
	}
	return 0;
}
