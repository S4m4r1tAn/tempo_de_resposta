import timeit

def sum_numbers():
    sum = 0
    for i in range(1, 100000001):
        sum += i
    print("Sum = ", sum)

print("Time taken: ", timeit.timeit(sum_numbers, number=1), " seconds")
