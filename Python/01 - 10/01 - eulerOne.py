def main():
    sum_three, sum_five, sum_both = 0, 0, 0
    for i in range(1000):
        if i % 3 == 0:
            sum_three = sum_three + i
        if i % 5 == 0:
            sum_five = sum_five + i
        if i % 15 == 0:
            sum_both = sum_both + i
    print("The sum of all the numbers less that 1000 that are multiples of 3 or 5 is", sum_three + sum_five - sum_both)

if __name__ == "__main__":
    main()
