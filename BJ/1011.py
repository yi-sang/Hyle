a = int(input())

for _ in range(a):
    x, y = map(int,input().split())
    d = y - x
    cnt = 0  # 이동 횟수
    mv = 1  # count별 이동 가능한 거리
    s_mv = 0  # 이동한 거리의 합
    while s_mv < d :
        cnt += 1
        s_mv += mv  # count 수에 해당하는 move를 더함
        if cnt % 2 == 0 :  # count가 2의 배수일 때, 
            mv += 1  
    print(cnt)