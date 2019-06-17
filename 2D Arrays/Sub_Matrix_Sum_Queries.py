class Solution:
    # @param A : list of list of integers
    # @param B : list of integers
    # @param C : list of integers
    # @param D : list of integers
    # @param E : list of integers
    # @return a list of integers
    def solve(self, A, B, C, D, E):
        n = len(A)
        m = len(A[0])
        mod = 10**9+7
        i = 0
        while i<n:
            j = 1
            while j<m:
                A[i][j] = (A[i][j] + A[i][j-1])%mod
                j += 1
            i += 1
        
        
        i = 0
        while i < m:
            j = 1
            while j<n:
                A[j][i] = (A[j][i] + A[j-1][i])%mod
                j+=1
            i+=1
        
        A = [[0] * m]+ A
        
        for i in range(n+1):
            A[i] = [0] + A[i]
        ans = []
        for i in range(len(B)):
            b,c,d,e = B[i],C[i],D[i],E[i]
            ans.append((A[d][e] - A[d][c-1] - A[b-1][e] + A[b-1][c-1])%mod)
        return ans

