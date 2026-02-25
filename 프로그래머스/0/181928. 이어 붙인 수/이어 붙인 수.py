def solution(num_list):
    odd_str = ""
    even_str = ""
    sum = 0
    for i in range(len(num_list)):
        num_str = chr(num_list[i]+48)
        if(num_list[i]%2==0):
            even_str+=num_str
        else:
            odd_str+=num_str
    sum = int(even_str)+int(odd_str)
    return sum