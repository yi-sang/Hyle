x = []
y = []
x1 = []
y1 = []
for i in range(3):
    a, b = map(int, input().split())
    x.append(a)
    y.append(b)
for j in range(3):
    if x.count(x[j])==1:
        x1 = x[j]
    if y.count(y[j])==1:    
        y1 = y[j]
print(x1, y1)
