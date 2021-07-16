import sys
inp = int(sys.stdin.readline().rstrip())
ary = []
cnt = 0
flag = 0
for i in range(inp):
    ps = sys.stdin.readline().rstrip()
    for j in ps:
        if j == "(":
            cnt += 1
        elif j == ")":
            cnt -= 1
        if cnt < 0:
            print("NO")
            flag = 1
            break
    if flag == 0:
        if cnt == 0:
            if ps[-1] == "(":
                print("NO")
            else:
                print("YES")
        else:
            print("NO")
    cnt = 0
    flag = 0