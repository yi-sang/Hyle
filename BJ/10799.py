a = int(input())

b = input().split()
if len(b) == 1:
    print(-1)
else:
    for i in range(len(b)-1):
        for j in range(i+1, len(b)):
            if int(b[j]) > int(b[i]):
                print(int(b[j]), end = " ")
                break
        else:
            print(-1, end = " ")
    else:
        print(-1)
