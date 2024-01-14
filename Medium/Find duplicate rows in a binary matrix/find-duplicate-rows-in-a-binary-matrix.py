#User function Template for python3

class Solution:
    def repeatedRows(self, arr, m ,n):
        #code here
        l = []
        p = []
        for i in range(len(arr)):
            if arr[i] not in l:
                l.append(arr[i])
            else:
                p.append(i)
        return p
        
        


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    tc = int(input())
    while tc > 0:
        n, m = list(map(int, input().strip().split()))
        
        arr = []
        for i in range(n):
            nums = list(map(int, input().strip().split()))
            arr.append(nums)
        ob = Solution()
        ans = ob.repeatedRows(arr, n, m)
        
        for x in ans:
            print(x, end=" ")
            
        print()
        tc -= 1

# } Driver Code Ends