class Solution {
public:
    int nthUglyNumber(int n) {
    
     set<long long> s,p;
     s.insert(1);
     while(p.size()!=n){
         long long num=*s.begin();
         p.insert(num);
         s.erase(num);
         s.insert(2*num);
         s.insert(3*num);
         s.insert(5*num);
     }
        return *p.rbegin();
     
    }
};


