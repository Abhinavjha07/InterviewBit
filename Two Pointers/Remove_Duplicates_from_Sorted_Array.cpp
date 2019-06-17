int Solution::removeDuplicates(vector<int> &a) {
    int n = a.size();
    int x = 1;
    vector<int> new_a;
    new_a.push_back(a[0]);
    for(int i=1;i<n;i++)
    {
        if(a[i-1]!=a[i])
        {
            x++;
            new_a.push_back(a[i]);
        }
    }
    a = new_a;
    return x;
}

