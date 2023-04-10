### This code using Python

##

# Dictionary to store words for numbers
words = {0: 'Zero', 1: 'One', 2: 'Two', 3: 'Three', 4: 'Four', 5: 'Five', 6: 'Six', 7: 'Seven', 8: 'Eight', 9: 'Nine', 
         10: 'Ten', 11: 'Eleven', 12: 'Twelve', 13: 'Thirteen', 14: 'Fourteen', 15: 'Fifteen', 16: 'Sixteen', 
         17: 'Seventeen', 18: 'Eighteen', 19: 'Nineteen', 20: 'Twenty', 30: 'Thirty', 40: 'Forty', 50: 'Fifty', 
         60: 'Sixty', 70: 'Seventy', 80: 'Eighty', 90: 'Ninety'}

# Function to convert a given number to its word form
def number_to_words(num):
    if num in words:
        return words[num]

    # For numbers greater than 20 and less than 100
    elif num < 100:
        return words[(num // 10) * 10] + ' ' + words[num % 10]

    # For numbers greater than or equal to 100 and less than 1000
    elif num < 1000:
        return words[num // 100] + ' Hundred ' + number_to_words(num % 100)

    # For numbers greater than or equal to 1000 and less than 1 million
    elif num < 1000000:
        return number_to_words(num // 1000) + ' Thousand ' + number_to_words(num % 1000)

    # For numbers greater than or equal to 1 million and less than 1 billion
    elif num < 1000000000:
        return number_to_words(num // 1000000) + ' Million ' + number_to_words(num % 1000000)

    # For numbers greater than or equal to 1 billion and less than 1 trillion
    else:
        return number_to_words(num // 1000000000) + ' Billion ' + number_to_words(num % 1000000000)

# Taking input for number of test cases
t = int(input())

# Taking input for each test case
for i in range(t):
    n = int(input())
    print(number_to_words(n))

                               
##
