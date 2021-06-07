d = dict()
d['csev'] = 2
d['cwen'] = 4
for (k, v) in d.items() :
    print(k, v)
tups = d.items()
print(tups)

c = {'a':10, 'b':1, 'c':22}
tmp = list()
for k, v in c.items() :
    tmp.append((v, k))
print(tmp)
tmp = sorted(tmp, reverse=True)
#tmp.sort(reverse=True)
print(tmp)