class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int n = nums.size();
        unordered_set<int>st;

        for(string &num : nums)
        {
            st.insert(stoi(num, 0, 2));// to convert binary string to decimal
            // TC O(N)
        }
        string res = " ";
        for(int num = 0; num <= n;num++)
        {
            if(st.find(num) == st.end()){
 // not found in set
            res = bitset<16>(num).to_string() ; // convert it into binary number of 16 length
            break;
            }
           
           
        }
        return  res.substr(16-n); // require only these;
    }
// TC O(N^2) SC O(N)
};