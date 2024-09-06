import math

n = int(input())

def is_prime(n):
    if n<=1:
        return False
    for i in range(2, int(math.sqrt(n))+1):
        if n%i==0:
            return False
    return True

def factorSum(n):
    lst1 = []
    for i in range(2, int(math.sqrt(n))+1):
        if is_prime(i)==True:
            lst1.append(i)
    lst1.reverse()
    sum = 0
    while(n>0):
        for i in lst1:
            while n%i==0:
                sum+=i
                n = n // i
    if is_prime(sum)==False:
        sum = factorSum(sum)
    return sum

print(factorSum(n))
