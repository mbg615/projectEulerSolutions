import numpy as np

matrix = np.loadtxt('matrix.txt') # Looks for and reads the file 'eulerEleven.txt'

maxProd = 1
for i in range(16):
    for j in range(16):
        productOne = matrix[i, j] * matrix[i + 1, j] * matrix[i + 2, j] * matrix[i + 3, j]
        if productOne > maxProd:
            maxProd = productOne
        
        productTwo = matrix[i, j] * matrix[i, j + 1] * matrix[i, j + 2] * matrix[i, j + 3]
        if productTwo > maxProd:
            maxProd = productTwo
            
        productThree = matrix[i, j] * matrix[i + 1, j + 1] * matrix[i + 2, j + 2] * matrix[i + 3, j + 3]
        if productThree > maxProd:
            maxProd = productThree
            
        productFour = matrix[19 - i, j] * matrix[18 - i, j + 1] * matrix[17 - i, j + 2] * matrix[16 - i, j + 3]
        if productFour > maxProd:
            maxProd = productFour
print("The maximum product of any four adjicent nubers in the matrix", matrix, "is", int(maxProd))
