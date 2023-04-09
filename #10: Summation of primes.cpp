### This Code Using Python

##

def sum_of_primes(n):
    if n < 2:
        return 0
    # Initializing a boolean list of size n+1 to store whether each number is prime or not
    primes = [True] * (n+1)
    primes[0] = primes[1] = False
    # Marking all multiples of primes as not primes
    for i in range(2, int(n**0.5)+1):
        if primes[i]:
            primes[i*i:n+1:i] = [False] * len(primes[i*i:n+1:i])
    # Calculating the sum of all primes up to n
    prime_sum = sum(i for i in range(2, n+1) if primes[i])
    return prime_sum

# Reading the number of test cases
t = int(input())
for i in range(t):
    # Reading the value of N for each test case
    n = int(input())
    # Calling the sum_of_primes function to find the sum of primes up to n
    result = sum_of_primes(n)
    # Printing the result for each test case
    print(result)

      
##
