
i = 0
def recursive_function():
    global i
    i += 1
    print(f"재귀 함수를 호출합니다{i}")
    recursive_function()

recursive_function()
