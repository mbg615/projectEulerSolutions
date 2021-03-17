from math import sqrt

def isPerfectSquare(number):
    root = sqrt(number)
    if int(root + 0.5) ** 2 == number:
        return True
    else: return False

for i in range(1, 1000, 1):
    for j in range(1, 1000, 1):
        iSquare = i * i
        jSquare = j * j
        sumSquare = iSquare + jSquare
        testSquare = isPerfectSquare(sumSquare)
        if testSquare:
            if i + j + sqrt(sumSquare) == 1000:
                prodTotal = i * j * sqrt(sumSquare)
                print("The product of", i, j, "and 1000 is", int(prodTotal), "when", i, "and", j, "is A and B from the pythagorean theorm that has a hypotenuse of 1000")
                exit()