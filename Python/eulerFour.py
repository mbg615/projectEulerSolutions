global fiveDigitPalindromes, sixDigitPalindromes
fiveDigitPalindromes = []
sixDigitPalindromes = []

def numOfDigits(number): # Find the number of digits in a number
    counter = 0
    while number != 0:
        subtractor = number % 10
        number -= subtractor
        number /= 10
        counter += 1
    return counter

def digit(number): # Find the last digit of a number
    number = number % 10
    return number

def digitRemover(number, subtractor): # Remove the last digit of a number
    number = number - subtractor
    number = number / 10
    return number

def five(number): # Check if a 5 digit number is a palindrome
    # Find digit five and prep for digit four:
    digitFive = digit(number)
    newProduct = digitRemover(product, digitFive)

    # Find digit four and prep for digit three:
    digitFour = digit(newProduct)
    newProduct = digitRemover(newProduct, digitFour)

    # Find digit three and prep for digit two:
    digitThree = digit(newProduct)
    newProduct = digitRemover(newProduct, digitThree)

    # Find digit two and prep for digit one:
    digitTwo = digit(newProduct)
    newProduct = digitRemover(newProduct, digitTwo)

    # Assigning digit one to last remaining digit:
    digitOne = newProduct

    # Test for palindromes
    if (digitFive == digitOne):
        if (digitFour == digitTwo):
            fiveDigitPalindromes.append(product)

def six(number): # Check if a 6 digit number is a palindrome
    # Find digit six and prep for digit five:
    digitSix = digit(number)
    newProduct = digitRemover(product, digitSix)
    
    # Find digit five and prep for digit four:
    digitFive = digit(newProduct)
    newProduct = digitRemover(newProduct, digitFive)
    
    # Find digit four and prep for digit three:
    digitFour = digit(newProduct)
    newProduct = digitRemover(newProduct, digitFour)

    # Find digit three and prep for digit two:
    digitThree = digit(newProduct)
    newProduct = digitRemover(newProduct, digitThree)

    # Find digit two and prep for digit one:
    digitTwo = digit(newProduct)
    newProduct = digitRemover(newProduct, digitTwo)

    # Assigning digit one to last remaining digit:
    digitOne = newProduct

    # Test for palindromes
    if (digitSix == digitOne):
        if (digitFive == digitTwo):
            if (digitFour == digitThree):
                sixDigitPalindromes.append(product)

for i in range(100, 999, 1): # loop through and multiply all 3-digit numbers
    for j in range(100, 999, 1):
        product = i * j
        digitsInNum = numOfDigits(product)

        if digitsInNum == 5:
            five(product)
        if digitsInNum == 6:
            six(product)

palindromes = fiveDigitPalindromes + sixDigitPalindromes
palindromes.sort()
print("The largest palindrome made from the product of two 3-digit numbers is:", palindromes[-1])