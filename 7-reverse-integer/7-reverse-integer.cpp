class Solution {
public:
    int reverse(int x) {
        long rem;
        long rev=0;
        long p=abs(x);
        while(p!=0){
            rem=p%10;
            rev=rev*10+rem;
            p=p/10;
        }
        if(rev>INT_MAX || rev<INT_MIN)
            return 0;
        if(x==abs(x))return rev;
        else
            return -1*rev;
    }
};