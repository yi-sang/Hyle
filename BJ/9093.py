import sys
a = int(sys.stdin.readline().rstrip())
for i in range(a):
    b = sys.stdin.readline().rstrip().split()
    for j in range(len(b)):
        s = "".join(list(b[j][::-1]))
        if j != len(b) - 1:
            
            print(s, end = " ")
        else:
            print(s)
