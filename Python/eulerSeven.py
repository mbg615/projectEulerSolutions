def isPrime(number):
    return all(number % i for i in range(2, number))
counter, number = 6, 13
while counter < 10001:
    number += 1
    testPrime = isPrime(number)
    if testPrime:
        counter += 1
print(number, "is the 10001st prime number")