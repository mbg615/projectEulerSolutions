def isPrime(number):
    for i in range(2, number):
        if number % i == 0:
            return 0
        else:
            return 1

counter, testNumber = 6, 14
while counter <= 10001:
    testForPrime = isPrime(testNumber)
    if testForPrime == 0:
        testNumber += 1
        print("Not Prime")
    if testForPrime == 1:
        testNumber += 1
        counter += 1
        print("Prime")
    if counter == 10001:
        print(testNumber, "is the 10001st prime number")
        exit()