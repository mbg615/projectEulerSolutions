def numOfDigits(number):
    count = 0
    while (number != 0):
        count += 1
    return count

for i in range(999, 100, -1):
    for j in range(999, 100, -1):
        product = i * j
        print(numOfDigits(product))