from sys import stdin
stack = []
n = int(stdin.readline().strip())
for i in range(n):
    line = stdin.readline().strip().split()
    if line[0] == "push":
        stack.append(line[1])
    elif line[0] == "front":
        if stack: print(stack[0])
        else: print(-1)
    elif line[0] == "back":
        if stack: print(stack[-1])
        else: print(-1)
    elif line[0] == "size":
        print(len(stack))
    elif line[0] == "pop":
        if stack: print(stack.pop(0))
        else: print(-1)
    elif line[0] == "empty":
        if stack: print(0)
        else: print(1)
