def solution(arr, queries):
    res = []
    for i in range(len(queries)):
        ans = 0
        max = queries[i][2]
        for j in range(queries[i][0], queries[i][1]+1):
            if (arr[j]>max):
                max = arr[j]
        for j in range(queries[i][0], queries[i][1]+1):
            if (arr[j]<max and arr[j]>queries[i][2]):
                max = arr[j]
        if (max == queries[i][2]):
            res.append(-1)
        else:
            res.append(max)
    return res            