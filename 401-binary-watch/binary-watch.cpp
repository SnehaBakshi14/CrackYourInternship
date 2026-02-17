class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string>res;
        for(int hh =0;hh<=11;hh++)
        {
            for(int mm=0;mm <=59; mm++)
            {
                if(__builtin_popcount(hh)+__builtin_popcount(mm) == turnedOn)//valid
                {
                    string hour = to_string(hh);
                    string minute = (mm < 10 ? "0":"")+to_string(mm);
                    res.push_back(hour + ":" + minute);
                }
            }
      
        }
              return res;
    }
    // TC O(12*60)
    //SC 0(1)
};