class Solution {
public:
    void merge(int A[], int m, int B[], int n) {
        if (A == NULL || B == NULL)
            return ;
        const int size = m;
        int tmp[size];
        for (int i=0; i<m; ++i) {
            tmp[i] = A[i];
        }
        int k=0,i=0,j=0;
        while (i<m && j<n)
        {
            if (tmp[i] < B[j]) {
                A[k++] = tmp[i++];
            } else
                A[k++] = B[j++];
        }
        while (i < m) {
            A[k++] = tmp[i++];
        }
        
        while (j < n) {
            A[k++] = B[j++];
        }
    }
};
