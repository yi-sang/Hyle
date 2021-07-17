letters = input()
ans=""
stack=[]
print ('('+letters+')')
# priority ={
#     '*':1,
#     '/':1,
#     '+':2,
#     '-':2
# }

# # 입력받은 문자열 전체를 괄호안에 넣으면서
# # 마지막 )괄호가 끝나면 스택에 남아있는 연산자를 한 번에 처리하기 위함
# for letter in '('+letters+')':
#     # 알파벳이면
#     if letter.isalpha():
#         ans+=letter

#     # )면 스택에서 ( 나올때까지 빼기
#     elif letter==')':
#         while stack:
#             temp = stack.pop()
#             if temp == '(':
#                 break
#             ans+=temp

#     # ( 면 스택에 추가
#     elif letter == '(':
#         stack.append(letter)

#     # 이외의 경우 -> 연산자
#     # 전에 스택에 있는 연산자보다 이번에 들어온 연산자의 우선순위가 낮거나 같으면
#     # 앞선 스택에 있던 것들보다 이번에 뽑은게 우선순위가 높아질때까지
#     # 또한 처음에 넣어둔 (가 나올때까지 다 pop
#     # 아직 )가 안나왔으니 (를 빼면 안된다 주의
#     else:        
#         while stack[-1]!='(' and priority[letter]>=priority[stack[-1]]:
#             ans+=stack.pop()
#         stack.append(letter)


# print(ans)