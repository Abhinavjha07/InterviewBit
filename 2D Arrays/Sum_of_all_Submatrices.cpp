int Solution::solve(vector<vector<int> > &A) {
    int n = A.size();
    int sum = 0; 
   for (int i = 0; i < n; i++)
   {
        for (int j = 0; j < n; j++)
        {
            int x = (i + 1) * (j + 1);
            int y = (n - i) * (n - j);
            sum += (x*y*A[i][j]);
        }
   }
    return sum; 
}

