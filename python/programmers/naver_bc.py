a = ['1', '2', '3']
c = []
for i in a:
    if i != '1':
        c.append(i)
d = []
b = ['fo', 'df', 'ef', 'eff']
for j in c:
    k = 0
    d.append(b[k]) # 하나씩 끼워 넣기
    d.append(j)
    k += 1
print(d)

