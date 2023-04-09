### This Code Using Python

##

def is_palindrome(n):
    return str(n) == str(n)[::-1]

t = int(input())
for i in range(t):
    n = int(input())
    palindromes = set()
    for j in range(999, 99, -1):
        for k in range(j, 99, -1):
            product = j * k
            if product < n and is_palindrome(product):
                palindromes.add(product)
        if j * j < n:
            break
    if palindromes:
        print(max(palindromes))
    else:
        print("-1")

##
