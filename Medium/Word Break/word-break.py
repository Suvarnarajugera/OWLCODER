#User function Template for python3

class Solution:
    def wordBreak(self, n, s, d):
        def solve(idx, dp):
            if idx==len(s):
                return True
            if dp[idx] == True:
                return dp[idx]
            for i in range(idx+1, len(s)+1):
                if s[idx:i] in d and solve(i, dp):
                    dp[idx] = True
                    return True
            dp[idx] = False
            return dp[idx]
        dp = [False]*(len(s)+1)
        return solve(0,dp)
    


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