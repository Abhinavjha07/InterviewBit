from bisect import bisect_right as upper_bound 
class Solution:
    
    def findMedian(self, A):
        mi = A[0][0] 
        mx = 0
        r = len(A)
        d = len(A[0])
        for i in range(r): 
            if A[i][0] < mi: 
                mi = A[i][0] 
            if A[i][d-1] > mx : 
                mx =  A[i][d-1]
        
        desired = (r * d + 1) // 2
      
        while (mi < mx): 
            mid = mi + (mx - mi) // 2
            place = 0
              
             
            for i in range(r): 
                 j = upper_bound(A[i], mid) 
                 place += j 
            if place < desired: 
                mi = mid + 1
            else: 
                mx = mid 
            
        
        return mi
        
        
        

