import sys
n = int(sys.stdin.readline().strip())
nums = list(map(int, sys.stdin.readline().strip().split()))
ary = dict()
for i in nums:
    try:
        ary[i] += 1
    except:
        ary[i] = 1
result = [-1] * n
stack = [0]
i = 1
while stack and i < n: # 스택에 값이 있고 i가 N보다 작을 때만
    # 스택에 값이 있고, 스택의 제일 위에 있는 인덱스에 해당하는 값보다 인덱스 i의 값이 크면
    while stack and ary[nums[stack[-1]]] < ary[nums[i]]:
        result[stack[-1]] = nums[i]
        stack.pop()
    stack.append(i)
    i += 1
print(*result)
# for i in range(num):
#     while stack and count[a[stack[-1]]] < count[a[i]]:
#         result[stack[-1]] = str(a[i])
#         stack.pop()
#     stack.append(i)
#     i+=1

# print(" ".join(result))

# import sys

# num = int(input())
# a = list(map(int, input().split(" ")))
# result = ["-1" for _ in range(num)]
# stack = [0]
# count = dict()
# for i in a:
#     try:
#         count[i] += 1
#     except:
#         count[i] = 1

# for i in range(num):
#     while stack and count[a[stack[-1]]] < count[a[i]]:
#         result[stack[-1]] = str(a[i])
#         stack.pop()
#     stack.append(i)
#     i+=1

# print(" ".join(result))