a = input()
ary = []
for i in range(len(a)):
    ary.append(a[i:])
ary.sort()
print(*ary, sep = "\n")