#User function Template for python3
class Solution:
    def isValid(self, str):
        #code here
        s  = str.split(".")
        cnt = 0
        for i in s:
            if i[0] != "0" and int(i) >= 0 and int(i) <= 255:
                cnt+=1
        if cnt == 4:
            return 1;
        return 0;

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == "__main__":
    t = int(input())
    for _ in range(0, t):
        s = input()
        ob = Solution()
        if (ob.isValid(s)):
            print("true")
        else:
            print("false")

# } Driver Code Ends