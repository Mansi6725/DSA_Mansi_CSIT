class Solution {
private:
    void nextsmaller(vector<int> &next,vector<int> height){
        stack<int> st;
        st.push(-1);
        for(int i=height.size()-1;i>=0;i--){
            while(!st.empty()&&st.top()!=-1&&height[st.top()]>=height[i])
                st.pop();
            next[i]=st.top();
            st.push(i);
        }
    }
    void prevsmaller(vector<int> &prev,vector<int> height){
        stack<int> st;
        st.push(-1);
        for(int i=0;i<height.size();i++){
            while(!st.empty()&&st.top()!=-1&&height[st.top()]>=height[i])
                st.pop();
            prev[i]=st.top();
            st.push(i);
        }
    }
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int> next(n);
        vector<int> prev(n);
        nextsmaller(next,heights);
        prevsmaller(prev,heights);
        int area=INT_MIN;
        for(int i=0;i<n;i++){
            int l=heights[i];
            if(next[i]==-1)
                next[i]=n;
            int b=next[i]-prev[i]-1;
            int newarea=l*b;
            area=max(area,newarea);
        }
        return area;
    }
};