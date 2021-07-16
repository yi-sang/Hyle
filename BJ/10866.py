import sys
from collections import deque
n = int(sys.stdin.readline().strip())
stack = deque([])
for i in range(n):
    line = sys.stdin.readline().strip().split()
    if line[0] == "push_front": stack.appendleft(line[1])
    elif line[0] == "push_back": stack.append(line[1])
    elif line[0] == "pop_front": print(stack.popleft()) if stack else print(-1)
    elif line[0] == "pop_back": print(stack.pop()) if stack else print(-1)
    elif line[0] == "size": print(len(stack))
    elif line[0] == "empty": print(0) if stack else print(1)
    elif line[0] == "front": print(stack[0]) if stack else print(-1)
    elif line[0] == "back": print(stack[-1]) if stack else print(-1)