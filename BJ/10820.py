
def fun(x):
    ary = [0, 0, 0, 0]
    for i in x:
        if i.isdigit():
            ary[2] += 1
        elif i == " ":
            ary[3] += 1
        elif i.isupper():
            ary[1] += 1
        elif i.islower():
            ary[0] += 1  
    return ary
while 1:
    try:
        inp = input()
        ans = fun(inp)
        if ans == -1:
            break
        else:
            print(*ans)
    except EOFError:
        break