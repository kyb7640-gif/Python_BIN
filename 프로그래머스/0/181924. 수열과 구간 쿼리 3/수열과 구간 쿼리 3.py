def solution(arr, queries):
    for i in range(len(queries)):
        num1 = queries[i][0]
        num2 = queries[i][1]
        temp1 = arr[num1]
        temp2 = arr[num2]
        arr[num2] = temp1
        arr[num1] = temp2
    return arr