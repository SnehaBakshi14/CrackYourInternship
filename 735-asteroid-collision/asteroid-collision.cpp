class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) 
    {
        int n = asteroids.size();
        vector<int>st ; // using list instead of stack to avoid reverasal , follows same lifo property
        for(int i = 0;i< n ;i++)
        {
            if(asteroids[i] > 0)
            {
                // postive number
                st.push_back(asteroids[i]);
            }
            else // -ve element
            {
                while(!st.empty() && st.back() > 0 && st.back() < abs (asteroids[i]))
                {
                    // list has element which is positive and less than the current element 
                    st.pop_back();
                }

                if(!st.empty() && st.back() > 0 && st.back() == abs(asteroids[i]))
                {
                    // same element case both destroyed
                    st.pop_back();
                }
                else if(st.empty() || st.back() < 0 )
                {
                    // only case when we put negative element when stack is empty or previous element is also negative
                    st.push_back(asteroids[i]);
                }

            }
        }
        return st;
    }
    // TC 0(2N) SC O(N)
};