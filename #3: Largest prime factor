### This  Code Using Python

##

import math

def largest_prime_factor(n):
    # Find and remove all the 2 factors
    while n % 2 == 0:
        n //= 2

    # Check for odd prime factors
    factor = 3
    while factor <= math.sqrt(n):
        if n % factor == 0:
            n //= factor
        else:
            factor += 2

    # The remaining value of n is the largest prime factor
    return n

# Read the number of test cases
T = int(input())

# Process each test case
for i in range(T):
    N = int(input())
    print(largest_prime_factor(N))

##
