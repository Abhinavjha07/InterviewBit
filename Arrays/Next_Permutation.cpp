

    void Solution::nextPermutation(vector<int> &A) {
        
        int n = A.size();
        int i = n - 1;
        while (i > 0 && A[i - 1] >= A[i]) {
            i--;
        }
     
        if (i <= 0) {
           sort(A.begin(),A.end());
           return ;
        }
     
        int j = n - 1;
     
        while (A[j] <= A[i - 1]) {
            j--;
        }
     
        int temp = A[i - 1];
        A[i - 1] = A[j];
        A[j] = temp;
     
        j = n - 1;
     
        while (i < j) {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
            i++;
            j--;
        }
     
        return ;
        
        
        
    }


