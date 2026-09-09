class MinStack {
public:
 stack<int>st;
    stack<int>mini;
    MinStack() {
    }
    
    void push(int x) {
        st.push(x);
        if(mini.empty()||x<=mini.top()){
            return mini.push(x);
        }
    }
    
    void pop() {
      if(st.top()==mini.top()){
         mini.pop();
      }
        st.pop();
        
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return mini.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */