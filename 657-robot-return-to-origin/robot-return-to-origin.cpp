class Solution {
public:
    bool judgeCircle(string moves) 
    {
        // Consider x axis and y axis 
        // if UP then +ve y axis if Down then -ve Y axis
        // if Right then +ve X axis if Left then -ve X axis 
        // if after all moves x and y are zero then it reached origin
        int x = 0;
        int y =0;
        for(char &ch : moves)
        {
            if(ch =='U') y++;
            else if(ch == 'D')y--;
            else if(ch == 'R')x++;
            else if(ch == 'L')x--;
        }

        return x==0 && y==0;
    }
    // TC O(N)
    //SC 0(1)
};