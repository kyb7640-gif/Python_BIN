def solution(l, r):
    str = []
    num = []
    i = 0
    j = 0
    str.append("5")
    while True:
        str.append(str[i]+"0")
        j+=1
        if(len(str[j])>6):
            break
        str.append(str[i]+"5")
        if(len(str[j])>6):
            break
        i+=1
    for k in range(j+1):
        if(l<= int(str[k]) and r>=int(str[k])):
            num.append(int(str[k]))
    num.sort()
    if (len(num) == 0):
        return [-1]
    else:
        return num     