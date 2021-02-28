sumSquared, sum = 0, 0
for i in range(0, 101, 1):
    sumSquared += i
for j in range(0, 101, 1):
    numSquared = j * j
    sum += numSquared
sumSquared *= sumSquared
diffrence = sumSquared - sum
print("The difference between the sum of the squares of the first one hundred natural numbers and the square of the sum is:", diffrence)