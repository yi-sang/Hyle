def solution(board, moves):
    answer = 0
    basket = []
    cnt = 0
    for i in moves[:]:
        for j in board[:]:
            if j[i - 1] != 0:
                basket.append(j[i - 1])
                j[i - 1] = 0
                if len(basket) >= 2:
                    if basket[-1] == basket[-2]:
                        del basket[-2:]
                        cnt += 2
                break 
    return cnt