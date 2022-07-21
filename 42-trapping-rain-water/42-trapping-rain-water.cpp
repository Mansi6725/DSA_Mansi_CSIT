class Solution {
public:
    int trap(vector<int>& a) {
        vector<int> lmax(a.size());
        vector<int> rmax(a.size());
        lmax[0]=a[0];
        for(int i=1;i<a.size();i++){
            lmax[i]=max(a[i],lmax[i-1]);
        }
        rmax[a.size()-1]=a[a.size()-1];
        for(int i=a.size()-2;i>=0;i--){
            rmax[i]=max(a[i],rmax[i+1]);
        }
        int res=0;
        for(int i=0;i<a.size();i++){
            res+=(min(lmax[i],rmax[i])-a[i]);
        }
        return res;
    }
};