class MyQueue {
public:
    stack<int> s1;
    stack<int> s2;
    int s=-1;
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
        s++;

    }
    
    int pop() {
        if(s==-1){
            return NULL;
        }
        int temp=s;
        while(temp!=0){
            temp--;
            s2.push(s1.top());
            s1.pop();
        }
        int t=s1.top();
        s1.pop();
        
        while(temp!=s){
            s1.push(s2.top());
            s2.pop();
            temp++;
        }
        s--;
        return t;

    }
    
    int peek() {
        if(s==-1){
            return NULL;
        }
        int temp=s;
        while(temp!=0){
            temp--;
            s2.push(s1.top());
            s1.pop();
        }
        int t=s1.top();
        
        
        while(temp!=s){
            s1.push(s2.top());
            s2.pop();
            temp++;
        }
        return t;
    }
    
    bool empty() {
        if(s==-1){
            return true;
        }
        return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */