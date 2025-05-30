/*class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        if(n==1) return true;
        if(n%2==1) return false;
        while(n>=1){
            n/=2;
            if(n==1) return true;
        }
        return true;
    }
};*/

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) return false;  // ✅ Exclude 0 and negative numbers

        while (n % 2 == 0) {
            n /= 2;
        }

        return n == 1;  // ✅ Only powers of 2 will reduce to 1
    }
};
