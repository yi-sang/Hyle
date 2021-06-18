n = int(input())
# 각 부품은 정수 형태의 고유한 번호가 있다.
# 중복 X
array = set(map(int, input().split()))

m = int(input())
x = list(map(int, input().split()))

for i in x:
    if i in array:
        print('yes', end = ' ')
    else:
        print('no', end = ' ')