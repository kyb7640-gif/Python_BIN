def solution(arr):
    stk = []
    i=0
    j=-1
    while (i<len(arr)):
        if (len(stk) == 0):
            stk.append(arr[i])
            i+=1
            j+=1
        else:
            if (stk[j] < arr[i]):
                stk.append(arr[i])
                i+=1
                j+=1
            else:
                stk.pop()
                j-=1
    return stk