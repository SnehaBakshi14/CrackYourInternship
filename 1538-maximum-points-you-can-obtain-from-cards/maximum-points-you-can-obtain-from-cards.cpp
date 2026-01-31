class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) 
    {
        int n = cardPoints.size();
        int leftsum =0 , rightsum =0, maxsum =0;
        for(int i =0;i<k ; i++)
        {
            leftsum = leftsum + cardPoints[i];
        }
        maxsum = leftsum;
        int rindex = n-1;
        for(int i = k-1;i>=0;i--)
        {
            leftsum = leftsum - cardPoints[i];
            rightsum = rightsum + cardPoints[rindex];
            rindex --;
            maxsum = max(maxsum , (leftsum + rightsum));

        }
        return maxsum;
        
    }
};