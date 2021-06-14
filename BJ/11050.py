from itertools import *
n, k = map(int, input().split())
a = list(combinations(n, k))
print(len(a))