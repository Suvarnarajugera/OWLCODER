//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int longSubarrWthSumDivByK(int arr[], int n, int k){
	    // Complete the function
	    int pre=0;
	   // prev[0] = arr[0];
	    map<int,int> mp;
	    mp[0]=-1;
	    int mx=0;
	    for(int i = 0 ; i < n ; i++){
	        pre+=arr[i];
	        int m=pre%k;
	        if(m<0) m+=k;
	        
	        if(mp.find(m)!=mp.end()){
	            mx=max(mx,i-mp[m]);
	        }
	        else{
	            mp[m]=i;
	        }
	    }
	    return mx;
	}
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,k,i;
	cin>>n>>k; int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution ob;
	cout<<ob.longSubarrWthSumDivByK(arr, n, k)<<"\n";
	}
	return 0;	 
}

// } Driver Code Ends