from itertools import combinations
array = []
for i in range(9):
    n = int(input())
    array.append(n)
# while True:
result = list(combinations(array, 7))
j = 0

while True:
    s_h = sum(result[j])
    if s_h == 100:
        l_res = list(result[j])
        l_res.sort()
        for k in l_res:
            print(k)
        break;
    j += 1
