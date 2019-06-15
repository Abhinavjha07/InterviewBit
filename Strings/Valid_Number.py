

def isDigit(x):
    try:
        float(x)
        return True
    except ValueError:
        return False
class Solution:
    # @param A : string
    # @return an integer
    
        
    def isNumber(self, A):
        if A[0]=='+' or A[0]=='-':
            A = A[1:]
        A = A.strip()
            
        if len(A)==0:
            return 0
        elif(len(A)>0 and A.isdigit()):
            return 1
        else:
            x = A.split('e')
            if len(x)>2:
                return 0
            else:
                
                a = x[0]
                if not isDigit(a):
                    return 0
                a = a.split('.')
                
                flag=0
                if(a[0].isdigit() or len(a[0])==0):
                    if len(a)>2:
                        return 0
                    elif len(a)==2:
                        if(len(a[1])>0 and isDigit(a[1])):
                            flag=1
                    elif len(a)==1:
                        flag=1
                    
                
                if len(x)==2:
                    if not isDigit(x[1]):
                        return 0
                    if len(x[1].split('.'))>1:
                        return 0
                    elif flag==1 and isDigit(x[1]) and len(x[1].split('.'))==1:
                        return 1
                if flag==1:  
                    return 1
                else:
                    return 0
                    


