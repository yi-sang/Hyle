def solution(new_id):
    new_id = new_id.lower()
    id = ""
    for i in new_id:
        if i in "-_." or i.isalnum():
            id += i
    new_id = id
    print(new_id)
    while new_id.count(".."):
        new_id = new_id.replace("..", ".")
    new_id = new_id.strip(".")
    
    if new_id == "":
        new_id = "a"
    
    id = new_id
    print(len(new_id))
    if len(new_id) >= 16:
        id = new_id[0:15]
        id = id.rstrip(".")
    new_id = id
    
    print(new_id)
    
    if len(new_id) <= 3:
        new_id = new_id + new_id[-1] * (3-len(new_id))
    answer = new_id

    return answer