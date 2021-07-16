import sys

st = sys.stdin.readline().strip()
flag = 0
stack = []
for i, s in enumerate(st):
    if s == "<":
        for stk in stack[:]:
            print(stack.pop(), end ="")
        flag = 1
    if flag == 1:
        print(s, end = "")
        if  s == ">":
            flag = 0
    
    elif s != " ":
        stack.append(s)
    elif s == " ":
        for stk in stack[:]:
            print(stack.pop(), end ="")
        print(" ", end = "")
for stk in stack[:]:
    print(stack.pop(), end ="")