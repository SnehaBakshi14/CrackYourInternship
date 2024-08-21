//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to find elements in the array that are equal to their index.
    vector<int> valueEqualToIndex(vector<int>& arr) 
    {
        // code here
        int n = arr.size();
        
        map<int,int> mp;
        
        for(int i=0;i<n;i++){
            int num = arr[i];
            mp[i+1] = num;
        }
        
        
        int low = 0;
        int high = n-1;
        vector<int> res;
        
        for(auto it : mp){
            if(it.first == it.second){
                res.push_back(it.first);
            }
        }
        return res;
        
    }
    // vector<int> valueEqualToIndex(vector<int>& arr) 
    // {
    //     // code here
    //     int n = arr.size();
    //     int low = 0;
    //     int high = n-1;
    //     vector<int>res;
    //     while(low<= high)
    //     {
    //         int mid = low + (high - low) / 2;
    //         if(mid == arr[mid])
    //         {
    //             res.push_back(mid);
    //         }
    //         else if(arr[mid+1] <= arr[high])
    //         {
    //             low = mid+1;
    //         }
    //         else
    //         {
    //             high = mid-1;
    //         }
    //     }
    //     return res;
    // }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        auto ans = ob.valueEqualToIndex(nums);
        if (ans.empty()) {
            cout << "Not Found";
        } else {
            for (int x : ans) {
                cout << x << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends