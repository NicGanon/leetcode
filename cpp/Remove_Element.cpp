class Solution {
public:
    int removeElement(int A[], int n, int elem) {
        if (n == 0)
            return n;
        int i = 0;
        while (i<n && A[i] != elem)
            ++i;
            
        int pos = i;
        while (i<n) {
            if (A[i] != elem) {
                A[pos] = A[i];
                ++pos;
            }
            ++i;
        }
        return pos;
    }
};
