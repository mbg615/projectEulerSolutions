import numpy as np

def main():
    matrix = np.loadtxt('matrix.txt') # Looks for and reads the file 'eulerEleven.txt'

    max_product = 1
    for i in range(16):
        for j in range(16):
            product_one = matrix[i, j] * matrix[i + 1, j] * matrix[i + 2, j] * matrix[i + 3, j]
            if product_one > max_product:
                max_product = product_one

            product_two = matrix[i, j] * matrix[i, j + 1] * matrix[i, j + 2] * matrix[i, j + 3]
            if product_two > max_product:
                max_product = product_two

            product_three = matrix[i, j] * matrix[i + 1, j + 1] * matrix[i + 2, j + 2] * matrix[i + 3, j + 3]
            if product_three > max_product:
                max_product = product_three

            product_four = matrix[19 - i, j] * matrix[18 - i, j + 1] * matrix[17 - i, j + 2] * matrix[16 - i, j + 3]
            if product_four > max_product:
                max_product = product_four
    print("The maximum product of any four adjicent nubers in the matrix", matrix, "is", int(max_product))

if __name__ == "__main__":
    main()
