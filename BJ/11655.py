a = input()
ary = []
for v in a:
    if v.isupper():
        if not chr(ord(v) + 13).isupper():
            ary.append(chr(ord(v) + 13 - 26))
        else:
            ary.append(chr(ord(v)+ 13))
    elif v.islower():
        if not chr(ord(v) + 13).islower():
            ary.append(chr(ord(v) + 13 - 26))
        else:
            ary.append(chr(ord(v) + 13))
    else:
        ary.append(v)
print(*ary, sep ="")
