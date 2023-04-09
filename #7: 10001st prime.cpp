### This Code Using Python

##

def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True

t = int(input())
for _ in range(t):
    n = int(input())
    count = 0
    i = 2
    while True:
        if is_prime(i):
            count += 1
            if count == n:
                print(i)
                break
        i += 1

                  
##
