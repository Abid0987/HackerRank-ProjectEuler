### This Code Using Python

##

t = int(input())

for _ in range(t):
    n, k = map(int, input().split())
    num = input()
    max_product = 0
    
    for i in range(n-k+1):
        product = 1
        for j in range(i, i+k):
            product *= int(num[j])
        max_product = max(max_product, product)
    
    print(max_product)

              
##
