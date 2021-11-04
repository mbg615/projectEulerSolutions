def main():
    sum_squared, sum = 0, 0
    for i in range(0, 101, 1):
        sum_squared += i
    for j in range(0, 101, 1):
        numSquared = j * j
        sum += numSquared
    sum_squared *= sum_squared
    diffrence = sum_squared - sum
    print("The difference between the sum of the squares of the first one hundred natural numbers and the square of the sum is:", diffrence)

if __name__ == "__main__":
    main()
