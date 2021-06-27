def solution(N, stages):
    answer = []
    m = max(stages) - 1
    failure = []
    res = []
    for j in range(1, N + 1):
        res.append(j)
        up = 0
        down = 0
        for i in stages:
            if i == j:
                up += 1
            if i >= j:
                down += 1
        if down != 0:
            failure.append(up/down)
        else:
            failure.append(0)
    ans = dict(zip(res, failure))
    # answer = dict(sorted(ans.items(), key=lambda x : x[1], reverse = 1))
    # answer = list(answer.keys())
    answer = sorted(ans, key = lambda x : ans[x], reverse = 1)
    print(answer) 
    return answer