from math import isqrt

def is_square(number: int) -> bool:
    return number == isqrt(number) ** 2

def main():
    for i in range(1, 1000, 1):
        for j in range(1, 1000, 1):
            iSquare = i * i
            jSquare = j * j
            sum_square = iSquare + jSquare
            if is_square(sum_square):
                if i + j + isqrt(sum_square) == 1000:
                    product_total = i * j * int(isqrt(sum_square))
                    print("The product of", i, j, "and", isqrt(sum_square), "is", product_total, "when", i, "and", j, "is A and B from a pythagorean tripple that has a hypotenuse of 1000")
                    exit()

if __name__ == "__main__":
    main()
