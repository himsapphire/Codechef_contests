/*Problem Code:
CONFCAT
*/
#include <iostream>
#include <climits>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;int n;
	while(t--){
	    cin>>n;
	    int arr[n];
	    int maxi=INT_MIN;int k=0;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        if(maxi<arr[i])
	          {
	              maxi=arr[i];
	              k=i;
	          }
	        
	    }
	    if(k==0)
	      cout<<-1<<endl;
	    else{  
	        cout<<k<<endl;
	        for(int i=0;i<k;i++)
	         cout<<arr[i]<<" ";
	         cout<<endl; 
	        cout<<n-k<<endl; 
	       for(int i=k;i<n;i++)
	         cout<<arr[i]<<" ";
	       cout<<endl;
	    }
	       
	}
	return 0;
}
