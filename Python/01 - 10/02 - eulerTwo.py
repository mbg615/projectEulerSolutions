def main():
    term_one, term_two, next_term, even_sum = 0, 1, 0, 0
    while (next_term <= 4000000):
        term_one = term_two
        term_two = next_term
        next_term = term_one + term_two
        if (next_term % 2 == 0):
            even_sum = even_sum + next_term
    print("The sum of all even numbers in a Fibonacci sequence less than 4 million is", even_sum)

if __name__ == "__main__":
    main()
