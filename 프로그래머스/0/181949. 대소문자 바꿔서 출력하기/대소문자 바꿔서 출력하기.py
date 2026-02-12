str = list(input())

for i in range(len(str)):
    if(ord(str[i])>=97):
        str[i] = str[i].upper()
    else:
        str[i] = str[i].lower()
    print(str[i],end="")