### This Code Using Python

##

# function to check if given triplet is a Pythagorean triplet or not
def is_pythagorean_triplet(a, b, c):
    return a*a + b*b == c*c

# function to find the maximum possible value of abc among all Pythagorean triplets
# for which a + b + c = n
def find_max_abc(n):
    max_abc = -1
    for c in range(n, 2, -1):
        for b in range(c-1, 1, -1):
            a = n - b - c
            if is_pythagorean_triplet(a, b, c):
                max_abc = max(max_abc, a*b*c)
    return max_abc

# main function to read input and call find_max_abc function for each test case
t = int(input())
for i in range(t):
    n = int(input())
    max_abc = find_max_abc(n)
    print(max_abc if max_abc != -1 else "-1")

      
##
