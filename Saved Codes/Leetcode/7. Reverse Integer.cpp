class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        while(x)
        {
            if (rev > INT_MAX/10 || rev < INT_MIN/10)
            {
                // check + 9 porjonto jawa jayna?
                return 0;
            }
            rev = 10*rev + x%10;
            x /= 10;
        }
        return rev;
    }
};