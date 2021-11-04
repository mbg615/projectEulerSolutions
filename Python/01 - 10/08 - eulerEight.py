from math import sqrt

def is_perfect_square(number):
    root = sqrt(number)
    if int(root + 0.5) ** 2 == number:
        return True
    else: return False

def main():
    for i in range(1, 1000, 1):
        for j in range(1, 1000, 1):
            i_square = i * i
            j_square = j * j
            sum_square = i_square + j_square
            test_square = is_perfect_square(sum_square)
            if test_square:
                if i + j + sqrt(sum_square) == 1000:
                    product_total = i * j * sqrt(sum_square)
                    print("The product of", i, j, "and 1000 is", int(product_total), "when", i, "and", j, "is A and B from the pythagorean theorm that has a hypotenuse of 1000")
                    exit()

if __name__ == "__main__":
    main()
