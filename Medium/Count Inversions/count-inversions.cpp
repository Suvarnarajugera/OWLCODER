//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long  cnt;
    void Fun(long long nums[] ,long long low , long long mid ,long long high){
        long long i = low ;
        for(long long j = mid + 1; j <= high ; j++){
            while(i <= mid && nums[i] <= (nums[j]))i++;
            if(i > mid )break;
            cnt+= (mid - i + 1);
        }
    }
    void merge(long long arr[] , long long low ,long long high ,long long mid){
        long long i = low ;
        long long j = mid + 1;
        long long k = 0;
        long long temp[500001];
        while(i <= mid && j <= high){
            if(arr[i] < arr[j]){
                temp[k++] = arr[i++];
            }
            else{
                temp[k++] = arr[j++];
            }
        }
        while(i <= mid){
            temp[k++] = arr[i++];
        }
        while(j <= high){
            temp[k++] = arr[j++];
        }
        for(int i = low ; i <= high ; i++){
            arr[i] = temp[i-low];
        }
    }
    void merge_sort(long long arr[] , long long low ,long long high){
        if(low == high)return;
        long long mid = (low + high)/2;
        merge_sort(arr,low,mid);
        merge_sort(arr,mid+1,high);
        Fun(arr,low,mid,high);
        merge(arr,low,high,mid);
    }
    long long int inversionCount(long long arr[], long long N){
        // Your Code Here
        cnt = 0;
        merge_sort(arr,0,N-1);
        return cnt;
    }

};

//{ Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}

// } Driver Code Ends