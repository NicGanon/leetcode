class Solution {
public:
    int singleNumber(int A[], int n) {
        int sum=A[0];
        for (int i=1; i<n; ++i)
            sum ^= A[i];
        return sum;
    }
};
