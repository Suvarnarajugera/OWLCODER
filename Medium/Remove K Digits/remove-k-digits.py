#User function Template for python3

class Solution:

    def removeKdigits(self, S, k):
        # code here
        st = []
        for i in range(len(S)):
            if len(st) == 0:
                st.append(S[i])
            elif S[i] >= st[-1]:
                st.append(S[i])
            else:
                while( len(st)!= 0 and k > 0 and  S[i] < st[-1]):
                    st.pop()
                    k-=1
                st.append(S[i])
        while k:
            st.pop()
            k-=1
        res = ''.join(st).lstrip('0')
        return res if res else "0"
            


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':

    t = int(input())

    for _ in range(t):
        S = input()
        K = int(input())

        obj = Solution()

        ans = obj.removeKdigits(S, K)

        print(ans)


# } Driver Code Ends