def solution (num_list):
    sum1 = 0
    sup1 = 1
    
    for i in range(len(num_list)):
        sup1*=num_list[i]
        sum1+=num_list[i]
    sum1=sum1**2
    
    if(sum1>sup1):
        return 1
    elif(sum1<sup1):
        return 0