class MyStack {
public:
    queue<int> g1;
    queue<int> g2;
    int s=-1;
    MyStack() {
        
    }
    
    void push(int x) {
        g1.push(x);
        s++;
    }
    
    int pop() {
        if(s==-1)return NULL;
        int temp=s;
        while(temp!=0){
            g2.push(g1.front());
            g1.pop();
            temp--;
        }
        s--;
        
        int t=g1.front();
        g1.pop();
        while(temp!=s+1){
            g1.push(g2.front());
            g2.pop();
            temp++;
        }
        return t ;
    }
    
    int top() {
        return g1.back();
    }
    
    bool empty() {
        if(s==-1){
            return true;
        }
        return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */