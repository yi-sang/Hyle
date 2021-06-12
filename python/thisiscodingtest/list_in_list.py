d = []

for i in range(3) :
    s = list(map(int, input().split()))
    d.append(s)
print(max(d))

print(d.index(max(d[0])))
print(d)