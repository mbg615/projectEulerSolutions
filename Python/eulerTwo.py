termOne, termTwo, nextTerm, evenSum = 0, 1, 0, 0
while (nextTerm <= 4000000):
    termOne = termTwo
    termTwo = nextTerm
    nextTerm = termOne + termTwo
    if (nextTerm % 2 == 0):
        evenSum = evenSum + nextTerm
print("The sum of all even numbers in a Fibonacci sequence less than 4 million is", evenSum)