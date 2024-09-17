#User function Template for python3

class Solution:
    def getMinDiff(self, arr, k):
        arr.sort()
        n = len(arr)
        a=arr[n-1]-arr[0]
        s=arr[0]+k
        l=arr[n-1]-k
        for i in range(len(arr)-1):
            m_m=min(s,arr[i+1]-k)
            m_n=max(l,arr[i]+k)
            if m_m<0:
                continue
            a=min(a,abs(m_m-m_n))
        return a
        





#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    tc = int(input())
    while tc > 0:
        k = int(input())
        # n = int(input())
        arr = list(map(int, input().strip().split()))
        ob = Solution()
        ans = ob.getMinDiff(arr, k)
        print(ans)
        tc -= 1

# } Driver Code Ends