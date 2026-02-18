class MinStack {
public:
    stack<long long >st;
    long long  mini;
    MinStack() {
        
    }
    
    void push(int val) 
    {

        if(st.empty())
        {
            mini = val;
            st.push(val);
        }
        else {
            if(val > mini) st.push(val);
            else
            {
                st.push(2LL*val - mini);
                mini = val;
            }
        }
    }
    
    void pop() 
    {
        if(!st.empty())
        {
            long long x = st.top();
            st.pop();
            if(x < mini )// modified value
            {
                mini = 2*mini - x;
            }
        }
    }
    
    int top() {
        if(!st.empty())
        {
            long long  x = st.top();

            if(mini < x) return x;
            else  return mini;
        }else
        {
            return -1;
        }
    }
    
    int getMin() {
        if (!st.empty()) {
            return mini;
        } else {
            return -1;
        }
    }
    
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */