### This Code Using Python

##

def smallest_divisible_num(n):
    ans = 1
    for i in range(1, n+1):
        ans = (ans * i) // gcd(ans, i)
    return ans

def gcd(a, b):
    if b == 0:
        return a
    return gcd(b, a % b)

# Reading input
t = int(input())
for i in range(t):
    n = int(input())
    print(smallest_divisible_num(n))


##
