//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int>spirallyTraverse(vector<vector<int> > &matrix) {
        // code here
        vector<int>ans;
        /* 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
        while left<=right and top<=bottom:
            for i in range(left,right+1,1):
                list1.append(matrix[top][i])
            top+=1
            for i in range(top,bottom+1,1):
                list1.append(matrix[i][right])
            right-=1
            if len(list1)==m*n:
                break
            for i in range(right,left-1,-1):
                list1.append(matrix[bottom][i])
            bottom-=1
            for i in range(bottom,top-1,-1):
                list1.append(matrix[i][left])
            left+=1
        */
        int n = matrix.size();
        int m = matrix[0].size();
        int left = 0;
        int right = m-1;
        int top = 0;
        int bottom = n-1;
        while(left <= right && top <= bottom){
            for(int i = left ; i <= right ; i++){
                ans.push_back(matrix[top][i]);
            }
            top++;
            for(int i = top ; i <= bottom ; i++){
                ans.push_back(matrix[i][right]);
            }
            right--;
            if(ans.size() == m * n){
                break;
            }
            for(int i = right ; i > left-1 ; i--){
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
            for(int i = bottom ; i > top-1 ; i--){
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int r, c;
        cin >> r >> c;
        vector<vector<int>> matrix(r, vector<int>(c, 0));

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cin >> matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix);
        for (int i = 0; i < result.size(); ++i)
            cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends