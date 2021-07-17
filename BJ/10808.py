import sys
inp = sys.stdin.readline().strip()
ary = [0]*26
for i in range(len(inp)):
    ary[ord(inp[i])- ord("a")] += 1
print(*ary)