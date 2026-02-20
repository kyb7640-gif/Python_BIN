def solution(a,b):
    a_num = str(a)
    b_num = str(b)
    str_num1 = a_num+b_num
    num1 = int(str_num1)
    num2 = 2*a*b
    if(num1>=num2):
        return num1
    else:
        return num2