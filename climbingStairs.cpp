class Solution {
public:
    int climbStairs(int n) {
        const int size = n+1;
        int table[size];
        for (int i=1; i<n+1; ++i) {
            if (i<=2)
                table[i] = i;
            else
                table[i] = table[i-1] + table[i-2];
        }
        
        return table[n];
    }
};
