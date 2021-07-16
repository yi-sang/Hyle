n = int(input())
nums = list(map(int, input().split()))
result = [-1] * n
stack = [0]
i = 1
while stack and i < n: # 스택에 값이 있고 i가 N보다 작을 때만
    # 스택에 값이 있고, 스택의 제일 위에 있는 인덱스에 해당하는 값보다 인덱스 i의 값이 크면
    while stack and nums[stack[-1]] < nums[i]:
        result[stack[-1]] = nums[i]
        stack.pop()
    stack.append(i)
    i += 1
print(*result)

stack = [2]
stack = []