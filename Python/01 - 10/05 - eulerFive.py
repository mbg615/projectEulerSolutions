def main():
    exit, num = 0, 1
    while (exit == 0):
        if num % 1 == 0 and num % 11 == 0 and num % 12 == 0 and num % 13 == 0 and num % 14 == 0 and num % 15 == 0 and num % 16 == 0 and num % 17 == 0 and num % 18 == 0 and num % 19 == 0 and num % 20 == 0:
            print(num, "is the smallest number that is divisible by 1 through 20")
            exit = 1
        num = num + 1

if __name__ == "__main__":
    main()
