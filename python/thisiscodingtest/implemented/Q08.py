a = input()
s = ""
i = 0
for v in a:
    if v.isalpha():
        s += v
    if v.isdigit():
        i += int(v)
s = "".join(sorted(s))
s += str(i)
print(s)
