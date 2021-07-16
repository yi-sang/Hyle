n = 10000
array = [True for i in range(n + 1)]
def is_prime(n):
    for i in range(2, int(n**0.5) + 1):
        if array[i] == True:
            j = 2
            while i * j <= n:
                array[i * j] = False
                j += 1
    for i in range(2, n + 1):
        if array[i]:
            print(i, end = ' ')

is_prime(16)
