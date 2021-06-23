def solution(numbers, hand):
    ret = ""
    l_x, l_y = 0, 0
    r_x, r_y = 2, 0

    d_x, d_y = -1, -1
    
    for i in numbers:
        if i == 1 or i == 4 or i == 7:
            ret += ("L")
            if i == 1:
                l_x, l_y = 0, 3
            elif i == 4:
                l_x, l_y = 0, 2
            elif i == 7:
                l_x, l_y = 0, 1
                
        elif i == 3 or i == 6 or i == 9:
            ret += ("R")
            if i == 3:
                r_x, r_y = 2, 3
            elif i == 6:
                r_x, r_y = 2, 2
            elif i == 9:
                r_x, r_y = 2, 1
                
        else:
            if i == 2:
                d_x, d_y = 1, 3
            elif i == 5:
                d_x, d_y = 1, 2
            elif i == 8:
                d_x, d_y = 1, 1
            elif i == 0:
                d_x, d_y = 1, 0
                
            if (abs((d_x - l_x)) + abs((d_y - l_y))) == (abs((d_x - r_x)) + abs((d_y - r_y))):
                if hand == "left":
                    ret += ("L")
                    print(f"지금 숫자: {i}, 왼손 위치: {l_x, l_y}, 오른손 위치: {r_x, r_y}")
                    if i == 2:
                        l_x, l_y = 1, 3
                    elif i == 5:
                        l_x, l_y = 1, 2
                    elif i == 8:
                        l_x, l_y = 1, 1
                    elif i == 0:
                        l_x, l_y = 1, 0
                            
                elif hand == "right":
                    ret += ("R")
                    print(f"지금 숫자: {i}, 왼손 위치: {l_x, l_y}, 오른손 위치: {r_x, r_y}")
                    if i == 2:
                        r_x, r_y = 1, 3
                    elif i == 5:
                        r_x, r_y = 1, 2
                    elif i == 8:
                        r_x, r_y = 1, 1
                    elif i == 0:
                        r_x, r_y = 1, 0
                        
            elif (abs((d_x - l_x)) + abs((d_y - l_y))) > (abs((d_x - r_x)) + abs((d_y - r_y))):
                    ret += ("R")
                    print(f"지금 숫자: {i}, 왼손 위치: {l_x, l_y}, 오른손 위치: {r_x, r_y}")
                    if i == 2:
                        r_x, r_y = 1, 3
                    elif i == 5:
                        r_x, r_y = 1, 2
                    elif i == 8:
                        r_x, r_y = 1, 1
                    elif i == 0:
                        r_x, r_y = 1, 0
                        
            elif (abs((d_x - l_x)) + abs((d_y - l_y))) < (abs((d_x - r_x)) + abs((d_y - r_y))):
                    ret += ("L")
                    print(f"지금 숫자: {i}, 왼손 위치: {l_x, l_y}, 오른손 위치: {r_x, r_y}")
                    if i == 2:
                        l_x, l_y = 1, 3
                    elif i == 5:
                        l_x, l_y = 1, 2
                    elif i == 8:
                        l_x, l_y = 1, 1
                    elif i == 0:
                        l_x, l_y = 1, 0
    return ret