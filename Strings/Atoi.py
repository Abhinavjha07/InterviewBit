class Solution:
    # @param A : string
    # @return an integer
    def atoi(self, A):
        a = A.split(' ')
        x = a[0]
        sign = 1
        if x[0] == '-':
            sign = -1
            x = x[1:]
        elif x[0] == '+':
            sign = 1
            x = x[1:]
        ans = 0
        if x.isdigit():
            ans = int(x)
        else:
            i = 1
            while(x[:i].isdigit()):
                i+=1
            if i==1:
                ans = 0
            else:
                ans = int(x[:i-1])
        return sign*ans
            
            

