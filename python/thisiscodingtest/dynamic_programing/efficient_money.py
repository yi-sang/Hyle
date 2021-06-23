n, m = map(int, input().split())
array = []

for i in range(n):
    inp = int(input())
    array.append(inp)

d = [10001] * (m + 1)
print(d)
d[0] = 0
for i in range(n):
    for j in range(array[i], m + 1):
        if d[j - array[i]] != 10001:
            d[j] = min(d[j], d[j - array[i]] + 1)

if d[m] == 10001:
    print(-1)
else:
    print(d[m])