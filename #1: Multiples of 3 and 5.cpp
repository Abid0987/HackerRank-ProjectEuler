### This Code Using Python

##

# function to calculate sum of all multiples of 3 or 5 below n
def sum_multiples(n):
    # initialize sum
    sum = 0
    # iterate from 1 to n-1
    for i in range(1, n):
        # check if current number is a multiple of 3 or 5
        if i % 3 == 0 or i % 5 == 0:
            # add current number to sum
            sum += i
    # return the final sum
    return sum

# read the number of test cases
t = int(input())
# iterate over all test cases
for i in range(t):
    # read the value of n for this test case
    n = int(input())
    # calculate the sum of all multiples of 3 or 5 below n
    result = sum_multiples(n)
    # print the result for this test case
    print(result)

##
