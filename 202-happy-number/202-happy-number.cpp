class Solution {
public:
    bool isHappy(int n) {
        int sum=0;
        while(1){
            
            while(n!=0){
                int rem=n%10;
                sum+=rem*rem;
                n/=10;
            }
            if(sum==1||sum==7)
                return true;
            else if(sum>1&&sum<10)
                return false;
            else{
                n=sum;
                sum=0;
            }
      }
        return false;
    }
};