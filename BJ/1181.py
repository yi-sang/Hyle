a = int(input())
ary = set()
for i in range(a):
    a -= 1
    b = input()
    ary.add(b)
list(ary)
ary = sorted(ary, key = lambda x : (len(x), x))
for v in ary:
    print(v)
