def solution(a,d,included):
    sum = 0;
    num = a
    for i in range(len(included)):
        if (included[i] is True):
            sum += a
        a += d
    return sum