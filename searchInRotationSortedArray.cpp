class Solution {
public:
    int search(int A[], int n, int target) {
        if (n<1)
            return -1;
        int i = 0;
        while (i+1 < n && A[i] < A[i+1])
            ++i;
        if (target > A[i])
            return -1;
        else if (target <= A[n-1] && i+1 < n)
            return binaryFind(A,i+1,n,target);
        else 
            return binaryFind(A,0,i+1,target);
    }
    
    int binaryFind(int A[],int s, int e, int target)
    {
        while (s <= e) {
            int mid = (s+e)/2;
            if (target == A[mid])
                return mid;
            else if (target > A[mid])
                s = mid+1;
            else
                e = mid-1;
        }
        return -1;
    }
};
