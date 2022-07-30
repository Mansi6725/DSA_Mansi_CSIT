class Solution {
public:
    int nthUglyNumber(int n) {
//         int cnt=0;
//          int i=1;
//         while(cnt!=n){
//           int j=i;
//           while(1){
//             if(j==1){
//                  cnt++;
//                 if(cnt==n)
//                     return i;
//                 i++;
//                 break;
//             }
               
//             else if(j%2==0)
//                 j=j/2;
//             else if(j%3==0)
//                 j=j/3;
//             else if (j%5==0)
//                 j=j/5;
//             else{
//                 i++;
//                  break;
//             }    
//         }
//       }
//    return -1;
    
        vector<int> v(n,0);
        v[0]=1;
        int indexA=0;
        int indexB=0;
        int indexC=0;
        int mini;
        int nextA,nextB,nextC;
        for(int i=1;i<n;i++){
             nextA=v[indexA]*2;
             nextB=v[indexB]*3;
             nextC=v[indexC]*5;
             mini=min(nextA,min(nextB,nextC));
             if(mini==nextA)
                 indexA++;
            if(mini==nextB)
                 indexB++;
            if(mini==nextC)
                 indexC++;
            v[i]=mini;
             
            
        }
        return v[n-1];
    }
};


