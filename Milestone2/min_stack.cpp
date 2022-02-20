class MinStack {
    int s_top;
    int stk[10000];
    int m_stk[10000];
    int m_top;
public:
    MinStack() {
        s_top=-1;
        m_top=-1;
    }
    
    void push(int val) {
        if(s_top>=10000)
            return ;
        stk[++s_top]=val;
        
        if(m_top>=0)
        {
            if(m_stk[m_top]>val)
            {
                m_top++;
                m_stk[m_top]=val;
            }
            else
            {
                m_stk[m_top+1]=m_stk[m_top];
                m_top++;
            }
        }
        else
        {
            m_stk[++m_top]=val;
        }
        
    }
    
    void pop() {
       if(s_top< 0)     
            return;
        
        s_top--;
        m_top--;
        
    }
    
    int top() {
        return stk[s_top];
        
    }
    
    int getMin() {
        return m_stk[m_top];
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
