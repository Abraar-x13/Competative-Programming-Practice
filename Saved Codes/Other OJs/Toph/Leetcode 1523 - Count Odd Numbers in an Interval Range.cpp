class Solution {
public:
    int countOdds(int low, int high) {
                int n = (high - low )+1;
        if(n %2 == 0) return n/2;
        else
        if(n%2 == 1)
        {
            if(low%2==1 || high%2==1) return n/2+1;
            else
            if(low%2==0 || high%2==0) return n/2;
        }
       return 0;
    }
};
