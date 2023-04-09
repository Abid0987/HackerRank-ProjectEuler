### This Code Using Python 

##

def difference(n):
    sum_of_squares = sum(i*i for i in range(1, n+1))
    square_of_sum = sum(range(1, n+1)) ** 2
    return abs(square_of_sum - sum_of_squares)

# read the number of test cases
t = int(input())

# iterate over the test cases
for i in range(t):
    # read the value of N for this test case
    n = int(input())

    # compute the required difference and print it
    print(difference(n))

      
      
##
