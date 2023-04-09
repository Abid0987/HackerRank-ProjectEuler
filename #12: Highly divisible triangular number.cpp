### This Code Using Python

##

from math import sqrt
from collections import Counter

def prime_factors(n):
    """Return a Counter object containing the prime factors of n."""
    factors = Counter()
    i = 2
    while i <= sqrt(n):
        if n % i == 0:
            factors[i] += 1
            n //= i
        else:
            i += 1
    if n > 1:
        factors[n] += 1
    return factors

def num_divisors(n):
    """Return the number of divisors of n."""
    factors = prime_factors(n)
    num_divisors = 1
    for count in factors.values():
        num_divisors *= (count + 1)
    return num_divisors

def find_first_triangle_number_with_n_divisors(n):
    """Return the first triangle number to have over n divisors."""
    triangle_num = 1
    i = 2
    while num_divisors(triangle_num) <= n:
        triangle_num += i
        i += 1
    return triangle_num

# Read input
t = int(input())
for _ in range(t):
    n = int(input())
    # Find the first triangle number with over n divisors
    result = find_first_triangle_number_with_n_divisors(n)
    print(result)

      
##
