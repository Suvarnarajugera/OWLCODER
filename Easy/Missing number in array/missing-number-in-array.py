#User function Template for python3

#User function Template for python3


class Solution:
    def missingNumber(self,array,n):
        N=[i for i in range(0,n+1)]
        s=sum(N)
        return abs(sum(array)-s)


#{ 
 # Driver Code Starts
#Initial Template for Python 3




t=int(input())
for _ in range(0,t):
    n=int(input())
    a=list(map(int,input().split()))
    s=Solution().missingNumber(a,n)
    print(s)
# } Driver Code Ends