#User function Template for python3

class Solution:
    def solve(self,idx, dp,d):
        if idx==len(s):
            return True
        if dp[idx]==True:
            return dp[idx]
        for i in range(idx+1, len(s)+1):
            if s[idx:i] in d:
                if self.solve(i, dp,d):
                    dp[idx] = True
                    return True
        dp[idx] = False
        return dp[idx]
    def wordBreak(self, n, s, d):
        dp = [False]*(len(s)+1)
        return self.solve(0,dp,d)
    


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	test_case = int(input())

	for _ in range(test_case):
		n = int(input())
		dictionary = [word for word in input().strip().split()]
		s = input().strip()
		ob = Solution()
		res = ob.wordBreak(n, s, dictionary)
		if res:
			print(1)
		else:
			print(0)
# } Driver Code Ends