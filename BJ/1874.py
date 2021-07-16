import sys
stack = []
cnt = 0
flag = 0
answer = []
a = int(sys.stdin.readline().rstrip())
for i in range(a):
    b = int(sys.stdin.readline().rstrip())
    while cnt < b:
        cnt += 1
        answer.append("+")
        stack.append(cnt)

    if stack[-1] == b:
        stack.pop()
        answer.append("-")
    else:
        print("NO")
        flag = 1
        break

if flag == 0:
    for i in answer:
        print(i)
