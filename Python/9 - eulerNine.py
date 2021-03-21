from math import isqrt

def isSquare(number: int) -> bool:
    return number == isqrt(number) ** 2

for i in range(1, 1000, 1):
    for j in range(1, 1000, 1):
        iSquare = i * i
        jSquare = j * j
        sumSquare = iSquare + jSquare
        if isSquare(sumSquare):
            if i + j + isqrt(sumSquare) == 1000:
                prodTotal = i * j * int(isqrt(sumSquare))
                print("The product of", i, j, "and", isqrt(sumSquare), "is", prodTotal, "when", i, "and", j, "is A and B from a pythagorean tripple that has a hypotenuse of 1000")
                exit()