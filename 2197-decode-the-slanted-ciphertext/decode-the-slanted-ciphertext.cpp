class Solution {
public:
    string decodeCiphertext(string encodedText, int rows) 
    {

        int l = encodedText.size();
        int cols = l/rows;

        string orignaltext ;
        for(int col =0;col<cols;col++)
        {
            for(int j = col; j<l; j+= (cols+1))
            {
                orignaltext += encodedText[j];

            }
        }

        while(!orignaltext.empty() && orignaltext.back() == ' ')
        {
            orignaltext.pop_back();
        }
        return orignaltext;
        
    }
};