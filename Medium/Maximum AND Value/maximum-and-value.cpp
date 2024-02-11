//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
 
class Solution
{
    public:
    int check(int x,int arr[],int n){
        int c=0;
        for(int i=0;i<n;i++){
            if((x & arr[i]) == x) c++;
        }
        return c;
    }
    // Function for finding maximum AND value.
    int maxAND (int arr[], int n)
    {
        int res=0;
        for(int i=31;i>=0;i--){
            int c=check(res | (1<<i),arr,n);
            // cout<<(1<<i)<<endl;
            if(c>1) res = res | (1<<i);
        }
        return res;
       
    }
};

//{ Driver Code Starts.
 
// Driver function
int main()
{
    int t;
    cin>>t;//testcases
    while(t--)
    {
        int n;
        cin>>n;//input n
        int arr[n+5],i;
        
        //inserting elements
        for(i=0;i<n;i++)
        cin>>arr[i];
        Solution obj;
        //calling maxAND() function
        cout <<  obj.maxAND(arr,n)<<endl;
    }
    return 0;
}
// } Driver Code Ends