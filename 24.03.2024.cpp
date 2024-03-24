// 24.03.2024 gfg potd solution
class Solution{
public:
    stack<int> insertAtBottom(stack<int> st,int x){
        stack<int>aux;
        while(!st.empty()){
            aux.push(st.top());
            st.pop();
        }
        
        st.push(x);
        
        while(!aux.empty()){
            st.push(aux.top());
            aux.pop();
        }
        return st;
    }
};
