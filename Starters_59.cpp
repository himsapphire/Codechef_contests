/*Problem Code:
MAXSUBARR*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;int n,m;
	while(t--){
	    cin>>n;
	    int arr[n];
	   long long int temp1=0,sum=0,temp2=0;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        temp1+=arr[i];
	        
	        if(sum<temp1)
	           sum=temp1;
	           
	       if(temp1<0)
	         temp1=0;
	    }
	    
	    cin>>m;
	    int arr1[m];
	    for(int i=0;i<m;i++){
	        cin>>arr1[i];
	        if(arr1[i]>0)
	          temp2+=arr1[i];
	    }
	    
	    cout<<sum+temp2<<endl;
	    
	}
	return 0;
}
