class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int>arr(101); 
        int maxfreq = 0;
        int total =0;
        
        for(int &num : nums)
        {
            arr[num]++;
            int freq = arr[num];
            if( freq > maxfreq)
            {
                maxfreq = freq;
                total = maxfreq;
            }
            else if(freq == maxfreq)
            {
                total += maxfreq;
            }
        }
        return total;

    }
};