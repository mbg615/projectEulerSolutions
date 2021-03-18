sumThree, sumFive, sumBoth = 0, 0, 0
for i in range(1000):
    if i % 3 == 0:
        sumThree = sumThree + i
    if i % 5 == 0:
        sumFive = sumFive + i
    if i % 15 == 0:
        sumBoth = sumBoth + i
print("The sum of all the numbers less that 1000 that are multiples of 3 or 5 is", sumThree + sumFive - sumBoth)