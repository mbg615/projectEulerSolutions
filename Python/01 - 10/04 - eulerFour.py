global five_digit_palindromes, six_digit_palindromes
five_digit_palindromes = []
six_digit_palindromes = []

def num_of_digits(number): # Find the number of digits in a number
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

def digit_remover(number, subtractor): # Remove the last digit of a number
    number = number - subtractor
    number = number / 10
    return number

def five(number): # Check if a 5 digit number is a palindrome
    # Find digit five and prep for digit four:
    digit_five = digit(number)
    new_product = digit_remover(product, digit_five)

    # Find digit four and prep for digit three:
    digit_four = digit(new_product)
    new_product = digit_remover(new_product, digit_four)

    # Find digit three and prep for digit two:
    digit_three = digit(new_product)
    new_product = digit_remover(new_product, digit_three)

    # Find digit two and prep for digit one:
    digit_two = digit(new_product)
    new_product = digit_remover(new_product, digit_two)

    # Assigning digit one to last remaining digit:
    digit_one = new_product

    # Test for palindromes
    if (digit_five == digit_one):
        if (digit_four == digit_two):
            five_digit_palindromes.append(product)

def six(number): # Check if a 6 digit number is a palindrome
    # Find digit six and prep for digit five:
    digit_six = digit(number)
    new_product = digit_remover(product, digit_six)

    # Find digit five and prep for digit four:
    digit_five = digit(new_product)
    new_product = digit_remover(new_product, digit_five)

    # Find digit four and prep for digit three:
    digit_four = digit(new_product)
    new_product = digit_remover(new_product, digit_four)

    # Find digit three and prep for digit two:
    digit_three = digit(new_product)
    new_product = digit_remover(new_product, digit_three)

    # Find digit two and prep for digit one:
    digit_two = digit(new_product)
    new_product = digit_remover(new_product, digit_two)

    # Assigning digit one to last remaining digit:
    digit_one = new_product

    # Test for palindromes
    if (digit_six == digit_one):
        if (digit_five == digit_two):
            if (digit_four == digit_three):
                six_digit_palindromes.append(product)

def main():
    for i in range(100, 999, 1): # loop through and multiply all 3-digit numbers
        for j in range(100, 999, 1):
            product = i * j
            digits_in_num = num_of_digits(product)

            if digits_in_num == 5:
                five(product)
            if digits_in_num == 6:
                six(product)

    palindromes = five_digit_palindromes + six_digit_palindromes
    palindromes.sort()
    print("The largest palindrome made from the product of two 3-digit numbers is:", palindromes[-1])

if __name__ == "__main__":
    main()
