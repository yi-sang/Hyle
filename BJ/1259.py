a = []
while True :
    cnt = 0
    a = list(input())
    if a == ["0"] :
        break
    b = list(reversed(a)) # sorted도 같은 방식으로!
    if b == a :
        print("yes")
    else:
        print("no")




