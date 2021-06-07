#split은 문자열을 리스트로 만듦
line = 'A lot                   of spaces'
print(len(line))
etc = line.split()
print(len(etc))
print(etc)

line = 'first;second;third'
print(len(line))
thing = line.split()
print(thing)
print(len(thing))

thing = line.split(';')
print(thing)
print(len(thing))
