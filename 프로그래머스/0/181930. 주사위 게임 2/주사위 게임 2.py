def solution(a,b,c):
    sum = 0
    if (a!=b and a!=c and b!=c):
        sum+=(a+b+c)
    elif(a==b and b==c):
        sum+=(a+b+c)*(a**2+b**2+c**2)*(a**3+b**3+c**3)
    else:
        sum+=(a+b+c)*(a**2+b**2+c**2)
    return sum
    