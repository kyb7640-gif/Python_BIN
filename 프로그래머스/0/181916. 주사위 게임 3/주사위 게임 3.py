def solution(a,b,c,d):
    dice_num = [0,0,0,0,0,0,0]
    dice_num[a] += 1
    dice_num[b] += 1
    dice_num[c] += 1
    dice_num[d] += 1
    num_a = dice_num[a]
    num_b = dice_num[b]
    num_c = dice_num[c]
    num_d = dice_num[d]
    
    cnt = 0
    sup = 1
    
    for i in range(7):
        if(dice_num[i]!=0):
            cnt += 1
            
    if (num_a == 2 and num_b == 2 and a!=b):
        real_two_num1 = a
        real_two_num2 = b
    elif (num_a == 2 and num_c == 2 and a!=c):
        real_two_num1 = a
        real_two_num2 = c
    elif (num_a == 2 and num_c == 2 and a!=d):
        real_two_num1 = a
        real_two_num2 = d
    elif (num_b == 2 and num_c == 2 and b!=c):
        real_two_num1 = b
        real_two_num2 = c
    elif (num_b == 2 and num_d == 2 and b!=d):
        real_two_num1 = b
        real_two_num2 = d
    elif (num_c == 2 and num_d == 2 and d!=c):
        real_two_num1 = c
        real_two_num2 = d
            
    if (cnt == 1):
        return 1111*a
    elif (cnt == 4):
        return min(a,b,c,d)
    elif (cnt == 3):
        if (num_a == 2):
            two_num = a
        elif (num_b == 2):
            two_num = b
        elif (num_c == 2):
            two_num = c
        else:
            two_num = d
        if (two_num != a):
            sup*=a
        if (two_num != b):
            sup*=b
        if (two_num != c):
            sup*=c
        if (two_num != d):
            sup*=d
        return sup
    else:
        if(num_a==1):
            return (10*b+a)**2
        elif(num_b==1):
            return (10*a+b)**2
        elif(num_c==1):
            return (10*a+c)**2
        elif(num_d==1):
            return (10*a+d)**2
        else:
            return (real_two_num1+real_two_num2)*abs(real_two_num1-real_two_num2)
        
        
    