def solution(str):
    mode = 0
    str1 = ""
    for i in range(len(str)):
        if(mode==0):
            if (str[i]=="1"):
                mode = 1
            elif(i%2 == 0):
                str1 += str[i]
        else:
            if (str[i]=="1"):
                mode = 0
            elif(i%2 == 1):
                str1 += str[i]
    if(len(str1)==0):
        return "EMPTY"
    else:
        return str1
                
            