class Solution {
public:
    bool isUgly(int n) {
//         int cnt=0;
//         vector<bool> v(n+1,true);
//         v[0]=v[1]=false;
//         for(int i=2;i<=n;i++){
//             if(v[i]){
//                 cnt++;
//                 for(int j=2*i;j<=n;j+=i)
//                     v[j]=false;
//             }
            
//         }
//         if(cnt<=3)
//             return true;
//         return false;
        
//         while(1){
//             if(n==1)
//                 return true;
//              if(n%5==0)
//                  n=n/5;
//              else if(n%3==0)
//                  n=n/3;
//              else if(n%2==0)
//                  n=n/2;
//              else return false;
            
//         }
        if(n==0)
            return false;
        while(n%2==0)
            n=n/2;
        while(n%3==0)
            n=n/3;
        while(n%5==0)
            n=n/5;
        if(n==1)
            return true;
        else return false;
        
           
        

        
    }
};