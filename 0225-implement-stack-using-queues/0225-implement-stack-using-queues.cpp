// class stack{
// public:

// };
class MyStack {
    queue<int>q;
public:
    MyStack() {
        // stack<int>st;
    }
    
    void push(int x) {
        // q.push_front(x);
        q.push(x);
        int n=q.size()-1;
        while(n>0){
            int n2=q.front();
            q.push(n2);
            q.pop();
            n--;
        }
    }
    
    int pop() {
        int n=q.front();
        q.pop();
        return n;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
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