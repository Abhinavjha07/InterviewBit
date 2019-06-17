vector<vector<int> > Solution::threeSum(vector<int> &A) {
    
    int n = A.size();
    sort(A.begin(),A.end()); 
    vector<vector<int>> ans;
    unordered_set<string> s;
    for (int i=0; i<n-1; i++) 
    { 
        int l = i + 1; 
        int r = n - 1; 
        int x = A[i]; 
        while (l < r) 
        { 
            if ((x + A[l] + A[r]) == 0) 
            {
                string z = to_string(x)+to_string(A[l])+to_string(A[r]);
                if(s.find(z)==s.end())
                {
                vector<int> temp;
                temp.push_back(x);
                temp.push_back(A[l]);
                temp.push_back(A[r]);
                ans.push_back(temp);
                temp.clear();
                s.insert(z);
                }
                l++; 
                r--; 
            }
  
            else if (x + A[l] + A[r] < 0) 
                l++; 

            else
                r--; 
        } 
    }
    return ans;
}

