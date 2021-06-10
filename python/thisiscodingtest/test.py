d = []
for i in range(10) :
    s = list(map(int, input().split()))
    d.append(s)

x = 1
y = 1
for i in range(10):
    if 2 in d[i] :
        a = i + 1
        b = d[i].index(2) + 1
        

# for i in range(10):
#     if 2 in d :
#     print(d[i].index(2))
while True : 
    if d[x][y] == 2 :
        d[x][y] = 9
        break

    if d[x][y+1] != 1 :
        d[x][y] = 9 
        y += 1

    else :
        if d[x+1][y] != 1 :
            d[x][y] = 9
            x += 1
        else:
            d[x][y] = 9
            break



for i in range(10):
    for j in range(10):
        if j != 9:
            print(d[i][j], end = " ")
        else :
            print(d[i][j])