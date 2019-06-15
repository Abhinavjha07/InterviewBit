int Solution::solve(vector<string> &A) {
    
    int n = A.size();
    float arr[n];
    for(int i=0;i<n;i++)
    arr[i] = stof(A[i]);
    // for(int i=0;i<n;i++)
    // cout<<arr[i]<<" ";
    double a=arr[0], b=arr[1], c=arr[2];
    for(int i=3 ; i<n ; i++){
        if(a+b+c > 1 && a+b+c < 2)
        {
            return 1;
        }
    
        else if(a+b+c > 2)
        {
            if(a>b && a>c)
            a = arr[i];
        
            else if(b>a && b>c)
                b = arr[i];
        
            else if(c>a && c>b)
            c = arr[i];
        
        }

    else
    {
        if(a<b && a<c)
            a = arr[i];
        else if(b<a && b<c)
            b = arr[i];
        
        else if(c<a && c<b)
            c = arr[i];
    }  
    
}

if(a+b+c > 1 && a+b+c < 2)
    return 1;

else{
    return 0;
}
}

